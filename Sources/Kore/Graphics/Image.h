#pragma once

namespace Kore {
	class Image {
	public:
		enum Format { RGBA32, Grey8, RGB24, RGBA128, RGBA64 };

		static int sizeOf(Image::Format format);

		Image(int width, int height, Format format, bool readable);
		Image(int width, int height, int depth, Format format, bool readable);
		Image(const char* filename, bool readable);
		virtual ~Image();
		int at(int x, int y);

		int width, height, depth;
		Format format;
		bool readable;
		bool compressed;
		u8* data;
		float* hdrData;
		int dataSize;
		unsigned internalFormat;

		//set data that will be used if Image(filename) constructor will be called with filename==null 
		//this data will be used once and then forgotten. it should be used immidiately.
		static void setNullFilenameData(void* fileData, int fileSize, const char* filename);
	};
}
