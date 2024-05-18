/*
SQLyog Ultimate v12.4.3 (64 bit)
MySQL - 10.4.28-MariaDB : Database - db_perpustakaan
*********************************************************************
*/

/*!40101 SET NAMES utf8 */;

/*!40101 SET SQL_MODE=''*/;

/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;
CREATE DATABASE /*!32312 IF NOT EXISTS*/`db_perpustakaan` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci */;

USE `db_perpustakaan`;

/*Table structure for table `tbl_buku` */

DROP TABLE IF EXISTS `tbl_buku`;

CREATE TABLE `tbl_buku` (
  `idBuku` int(10) NOT NULL AUTO_INCREMENT,
  `Judul Buku` varchar(255) NOT NULL,
  `Pengarang` varchar(255) NOT NULL,
  `Penerbit` varchar(255) NOT NULL,
  `Tahun Terbit` char(4) NOT NULL,
  `Jumlah Halaman` int(4) NOT NULL,
  `Stok Buku` int(3) NOT NULL,
  `Status Aktif` enum('1','0') NOT NULL,
  PRIMARY KEY (`idBuku`)
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

/*Data for the table `tbl_buku` */

insert  into `tbl_buku`(`idBuku`,`Judul Buku`,`Pengarang`,`Penerbit`,`Tahun Terbit`,`Jumlah Halaman`,`Stok Buku`,`Status Aktif`) values 
(1,'How to Fight','Karepmu','New World Library','2018',236,95,'1'),
(2,'Harry Potter and the Sorcerer\'s Stone','J.K. Rowling','Bloomsbury','1997',332,70,'1'),
(3,'To Kill a Mockingbird','Harper Lee','J.B. Lippincott & Co.','1960',281,81,'1'),
(4,'The Da Vinci Code','Dan Brown','Doubleday','2003',454,68,'1'),
(5,'1984','George Orwell','Secker & Warburg','1949',328,86,'1'),
(6,'Pride and Prejudice','Jane Austen','T. Egerton, Whitehall','1813',432,59,'1'),
(7,'The Great Gatsby','F. Scott Fitzgerald','Charles Scribner\'s Sons','1925',180,30,'1');

/*Table structure for table `tbl_karyawan` */

DROP TABLE IF EXISTS `tbl_karyawan`;

CREATE TABLE `tbl_karyawan` (
  `idKaryawan` int(10) NOT NULL AUTO_INCREMENT,
  `Nama Karyawan` varchar(255) NOT NULL,
  `Status Aktif` enum('1','0') NOT NULL,
  PRIMARY KEY (`idKaryawan`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

/*Data for the table `tbl_karyawan` */

insert  into `tbl_karyawan`(`idKaryawan`,`Nama Karyawan`,`Status Aktif`) values 
(1,'Joseph Doe','1'),
(2,'Bane Smith','1'),
(3,'Michael Atlas','1');

/*Table structure for table `tbl_peminjam` */

DROP TABLE IF EXISTS `tbl_peminjam`;

CREATE TABLE `tbl_peminjam` (
  `idPeminjam` int(10) NOT NULL AUTO_INCREMENT,
  `Nama Peminjam` varchar(255) NOT NULL,
  `Level Peminjam` enum('Dosen','Mahasiswa') NOT NULL,
  `Status Aktif` enum('1','0') NOT NULL,
  PRIMARY KEY (`idPeminjam`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

/*Data for the table `tbl_peminjam` */

insert  into `tbl_peminjam`(`idPeminjam`,`Nama Peminjam`,`Level Peminjam`,`Status Aktif`) values 
(1,'Amir Murtako','Dosen','1'),
(2,'Ion Veritawati','Dosen','1'),
(3,'Dhandi Adam','Mahasiswa','1'),
(4,'Muhammad Azhar','Mahasiswa','1'),
(5,'Daffa Fathan','Mahasiswa','1'),
(6,'Valention','Mahasiswa','1');

/*Table structure for table `tbl_peminjaman` */

DROP TABLE IF EXISTS `tbl_peminjaman`;

CREATE TABLE `tbl_peminjaman` (
  `idPeminjaman` int(10) NOT NULL AUTO_INCREMENT,
  `idBuku` int(10) NOT NULL,
  `idKaryawan` int(10) NOT NULL,
  `idPeminjam` int(10) NOT NULL,
  `Jumlah Peminjaman` int(2) NOT NULL,
  `Status Aktif` enum('1','0') NOT NULL,
  PRIMARY KEY (`idPeminjaman`),
  KEY `idBuku_Peminjam` (`idBuku`),
  KEY `idKaryawan_Peminjam` (`idKaryawan`),
  KEY `idPeminjam_Peminjam` (`idPeminjam`),
  CONSTRAINT `idBuku_Peminjam` FOREIGN KEY (`idBuku`) REFERENCES `tbl_buku` (`idBuku`) ON DELETE NO ACTION ON UPDATE CASCADE,
  CONSTRAINT `idKaryawan_Peminjam` FOREIGN KEY (`idKaryawan`) REFERENCES `tbl_karyawan` (`idKaryawan`) ON DELETE NO ACTION ON UPDATE CASCADE,
  CONSTRAINT `idPeminjam_Peminjam` FOREIGN KEY (`idPeminjam`) REFERENCES `tbl_peminjam` (`idPeminjam`) ON DELETE NO ACTION ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

/*Data for the table `tbl_peminjaman` */

insert  into `tbl_peminjaman`(`idPeminjaman`,`idBuku`,`idKaryawan`,`idPeminjam`,`Jumlah Peminjaman`,`Status Aktif`) values 
(2,7,2,4,5,'1'),
(3,7,3,1,5,'1'),
(4,1,1,5,3,'1');

/*Table structure for table `tbl_pengembalian` */

DROP TABLE IF EXISTS `tbl_pengembalian`;

CREATE TABLE `tbl_pengembalian` (
  `idPengembalian` int(10) NOT NULL AUTO_INCREMENT,
  `idPeminjaman` int(10) NOT NULL,
  `idKaryawan` int(10) NOT NULL,
  `Status Aktif` enum('1','0') NOT NULL,
  PRIMARY KEY (`idPengembalian`),
  KEY `idPeminjaman_Pengembalian` (`idPeminjaman`),
  KEY `idKaryawan_Pengembalian` (`idKaryawan`),
  CONSTRAINT `idKaryawan_Pengembalian` FOREIGN KEY (`idKaryawan`) REFERENCES `tbl_karyawan` (`idKaryawan`) ON DELETE NO ACTION ON UPDATE CASCADE,
  CONSTRAINT `idPeminjaman_Pengembalian` FOREIGN KEY (`idPeminjaman`) REFERENCES `tbl_peminjaman` (`idPeminjaman`) ON DELETE NO ACTION ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=20 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

/*Data for the table `tbl_pengembalian` */

insert  into `tbl_pengembalian`(`idPengembalian`,`idPeminjaman`,`idKaryawan`,`Status Aktif`) values 
(19,2,1,'1');

/* Trigger structure for table `tbl_peminjaman` */

DELIMITER $$

/*!50003 DROP TRIGGER*//*!50032 IF EXISTS */ /*!50003 `tgrPeminjaman` */$$

/*!50003 CREATE */ /*!50017 DEFINER = 'root'@'localhost' */ /*!50003 TRIGGER `tgrPeminjaman` AFTER INSERT ON `tbl_peminjaman` FOR EACH ROW BEGIN
	update `db_perpustakaan`.`tbl_buku`
	set `Stok Buku` = `Stok Buku` - new.`Jumlah Peminjaman`
	where idBuku = new.idBuku;
    END */$$


DELIMITER ;

/*Table structure for table `vwbuku` */

DROP TABLE IF EXISTS `vwbuku`;

/*!50001 DROP VIEW IF EXISTS `vwbuku` */;
/*!50001 DROP TABLE IF EXISTS `vwbuku` */;

/*!50001 CREATE TABLE  `vwbuku`(
 `ID Buku` int(10) ,
 `Judul Buku` varchar(255) ,
 `Pengarang` varchar(255) ,
 `Penerbit` varchar(255) ,
 `Tahun Terbit` varchar(10) ,
 `Jumlah Halaman` varchar(19) ,
 `Stok Buku` varchar(16) ,
 `Status Aktif Buku` enum('1','0') 
)*/;

/*Table structure for table `vwpeminjaman` */

DROP TABLE IF EXISTS `vwpeminjaman`;

/*!50001 DROP VIEW IF EXISTS `vwpeminjaman` */;
/*!50001 DROP TABLE IF EXISTS `vwpeminjaman` */;

/*!50001 CREATE TABLE  `vwpeminjaman`(
 `ID Peminjaman` int(10) ,
 `ID Buku` int(10) ,
 `Judul Buku` varchar(255) ,
 `Pengarang` varchar(255) ,
 `ID Karyawan` int(10) ,
 `Nama Karyawan` varchar(255) ,
 `ID Peminjam` int(10) ,
 `Nama Peminjam` varchar(255) ,
 `Level Peminjam` enum('Dosen','Mahasiswa') ,
 `Jumlah Peminjaman` varchar(16) ,
 `Status Aktif Peminjaman` enum('1','0') 
)*/;

/*Table structure for table `vwpengembalian` */

DROP TABLE IF EXISTS `vwpengembalian`;

/*!50001 DROP VIEW IF EXISTS `vwpengembalian` */;
/*!50001 DROP TABLE IF EXISTS `vwpengembalian` */;

/*!50001 CREATE TABLE  `vwpengembalian`(
 `ID Pengembalian` int(10) ,
 `ID Peminjaman` int(10) ,
 `ID Buku` int(10) ,
 `Judul Buku` varchar(255) ,
 `ID Karyawan Peminjaman` int(10) ,
 `Nama Karyawan Peminjaman` varchar(255) ,
 `ID Peminjam` int(10) ,
 `Nama Peminjam` varchar(267) ,
 `ID Karyawan Pengembalian` int(10) ,
 `Nama Karyawan Pengembalian` varchar(255) ,
 `Jumlah Peminjaman` varchar(16) ,
 `Status Aktif Pengembalian` enum('1','0') 
)*/;

/*View structure for view vwbuku */

/*!50001 DROP TABLE IF EXISTS `vwbuku` */;
/*!50001 DROP VIEW IF EXISTS `vwbuku` */;

/*!50001 CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `vwbuku` AS (select `tbl_buku`.`idBuku` AS `ID Buku`,`tbl_buku`.`Judul Buku` AS `Judul Buku`,`tbl_buku`.`Pengarang` AS `Pengarang`,`tbl_buku`.`Penerbit` AS `Penerbit`,concat('Tahun ',`tbl_buku`.`Tahun Terbit`) AS `Tahun Terbit`,concat(`tbl_buku`.`Jumlah Halaman`,' halaman') AS `Jumlah Halaman`,concat(`tbl_buku`.`Stok Buku`,' buku') AS `Stok Buku`,`tbl_buku`.`Status Aktif` AS `Status Aktif Buku` from `tbl_buku`) */;

/*View structure for view vwpeminjaman */

/*!50001 DROP TABLE IF EXISTS `vwpeminjaman` */;
/*!50001 DROP VIEW IF EXISTS `vwpeminjaman` */;

/*!50001 CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `vwpeminjaman` AS (select `tbl_peminjaman`.`idPeminjaman` AS `ID Peminjaman`,`tbl_peminjaman`.`idBuku` AS `ID Buku`,`tbl_buku`.`Judul Buku` AS `Judul Buku`,`tbl_buku`.`Pengarang` AS `Pengarang`,`tbl_peminjaman`.`idKaryawan` AS `ID Karyawan`,`tbl_karyawan`.`Nama Karyawan` AS `Nama Karyawan`,`tbl_peminjaman`.`idPeminjam` AS `ID Peminjam`,`tbl_peminjam`.`Nama Peminjam` AS `Nama Peminjam`,`tbl_peminjam`.`Level Peminjam` AS `Level Peminjam`,concat(`tbl_peminjaman`.`Jumlah Peminjaman`,' buku') AS `Jumlah Peminjaman`,`tbl_peminjaman`.`Status Aktif` AS `Status Aktif Peminjaman` from (((`tbl_peminjaman` join `tbl_buku` on(`tbl_peminjaman`.`idBuku` = `tbl_buku`.`idBuku`)) join `tbl_karyawan` on(`tbl_peminjaman`.`idKaryawan` = `tbl_karyawan`.`idKaryawan`)) join `tbl_peminjam` on(`tbl_peminjaman`.`idPeminjam` = `tbl_peminjam`.`idPeminjam`)) where `tbl_buku`.`Status Aktif` = '1' and `tbl_karyawan`.`Status Aktif` = '1' and `tbl_peminjam`.`Status Aktif` = '1' and `tbl_peminjaman`.`Status Aktif` = '1' order by `tbl_peminjaman`.`idPeminjaman`) */;

/*View structure for view vwpengembalian */

/*!50001 DROP TABLE IF EXISTS `vwpengembalian` */;
/*!50001 DROP VIEW IF EXISTS `vwpengembalian` */;

/*!50001 CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `vwpengembalian` AS (select `tbl_pengembalian`.`idPengembalian` AS `ID Pengembalian`,`tbl_pengembalian`.`idPeminjaman` AS `ID Peminjaman`,`tbl_peminjaman`.`idBuku` AS `ID Buku`,`tbl_buku`.`Judul Buku` AS `Judul Buku`,`tbl_karyawan_peminjaman`.`idKaryawan` AS `ID Karyawan Peminjaman`,`tbl_karyawan`.`Nama Karyawan` AS `Nama Karyawan Peminjaman`,`tbl_peminjaman`.`idPeminjam` AS `ID Peminjam`,concat(`tbl_peminjam`.`Nama Peminjam`,' (',`tbl_peminjam`.`Level Peminjam`,')') AS `Nama Peminjam`,`tbl_pengembalian`.`idKaryawan` AS `ID Karyawan Pengembalian`,`tbl_karyawan`.`Nama Karyawan` AS `Nama Karyawan Pengembalian`,concat(`tbl_peminjaman`.`Jumlah Peminjaman`,' buku') AS `Jumlah Peminjaman`,`tbl_pengembalian`.`Status Aktif` AS `Status Aktif Pengembalian` from (((((`tbl_pengembalian` join `tbl_peminjaman` on(`tbl_pengembalian`.`idPeminjaman` = `tbl_peminjaman`.`idPeminjaman`)) join `tbl_buku` on(`tbl_peminjaman`.`idBuku` = `tbl_buku`.`idBuku`)) join `tbl_karyawan` `tbl_karyawan_peminjaman` on(`tbl_peminjaman`.`idKaryawan` = `tbl_karyawan_peminjaman`.`idKaryawan`)) join `tbl_karyawan` on(`tbl_pengembalian`.`idKaryawan` = `tbl_karyawan`.`idKaryawan`)) join `tbl_peminjam` on(`tbl_peminjaman`.`idPeminjam` = `tbl_peminjam`.`idPeminjam`)) where `tbl_pengembalian`.`Status Aktif` = '1' and `tbl_peminjaman`.`Status Aktif` = '1' and `tbl_buku`.`Status Aktif` = '1' and `tbl_karyawan`.`Status Aktif` = '1' and `tbl_peminjam`.`Status Aktif` = '1' order by `tbl_pengembalian`.`idPengembalian`) */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;
