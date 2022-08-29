all:
	gcc webPageDownloader.c -o webpagedownloader
linux-32:
	gcc webPageDownloader.c -o webpagedownloader -m32