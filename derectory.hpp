/*
* @summary£ºthis file is used to get current working directory and resource directory.
*/
#pragma once
#define _Windows_Platform_

#ifdef _Windows_Platform_
#include <direct.h>
#endif // _Windows_Platform_

#ifdef _MacOS_Platform_
#include <unistd.h>
#endif // _MacOS_Platform_

#include <string>


namespace TryEngine
{
	class Directory
	{

	public:
		Directory();
		~Directory();

		


	private:
		std::string _cwd;
		std::string _rd;
		static Directory* _instance;
	};
}






