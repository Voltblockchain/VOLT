
Debian
====================
This directory contains files used to package voltd/volt-qt
for Debian-based Linux systems. If you compile voltd/volt-qt yourself, there are some useful files here.

## volt: URI support ##


volt-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install volt-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your volt-qt binary to `/usr/bin`
and the `../../share/pixmaps/volt128.png` to `/usr/share/pixmaps`

volt-qt.protocol (KDE)

