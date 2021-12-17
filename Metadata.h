#include <string>
#include <iostream>

class Metadata {
public:
	Metadata(std::string fileName, std::string imageType, std::string date,
		double size, std::string author, int width, int height, std::string apertureSize,
		std::string exposureTime, int iso, bool flash);

	std::string myFileName;
	std::string myImageType;
	std::string myDate;
	double mySize;
	std::string myAuthor;
	int myWidth;
	int myHeight;
	std::string myApertureSize;
	std::string myExposureTime;
	int myISO;
	bool myFlash;

};

std::string getFileName(const Metadata& metadata);
std::string getImageType(const Metadata& metadata);
std::string getDate(const Metadata& metadata);
double getSize(const Metadata& metadata);
std::string getAuthor(const Metadata& metadata);
int getWidth(const Metadata& metadata);
int getHeight(const Metadata& metadata);
std::string getApertureSize(const Metadata& metadata);
std::string getExposureTime(const Metadata& metadata);
int getISO(const Metadata& metadata);
bool getFlash(const Metadata& metadata);

void setFileName(Metadata& metadata, std::string fileName);
void setImageType(Metadata& metadata, std::string imageType);
void setDate(Metadata& metadata, std::string date);
void setSize(Metadata& metadata, double size);
void setAuthor(Metadata& metadata, std::string author);
void setWidth(Metadata& metadata, int width);
void setHeight(Metadata& metadata, int height);
void setApertureSize(Metadata& metadata, std::string apertureSize);
void setExposureTime(Metadata& metadata, std::string exposureTime);
void setISO(Metadata& metadata, int iso);
void setFlash(Metadata& metadata, bool flash);

std::ostream& operator<<(std::ostream& os, const Metadata& metadata);
