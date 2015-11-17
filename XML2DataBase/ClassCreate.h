#ifndef _CLASS_CREATE_H
#define _CLASS_CREATE_H

#include "Common.h"
#ifdef WIN32
#include <direct.h>
#else
#include <sys/stat.h> 
#endif
#include<iostream>
#include<fstream>
using namespace std;

void Check_Include_File(_Table_Info obj_Class_Info, _XML_Proc obj_XML_Proc, vec_Include_Info& obj_vec_Include_Info);

void Create_Environment(_XML_Proc& obj_XML_Proc);

void Create_Define_H(_Proc_Define_Info obj_Proc_Define_Info);

bool Create_Class_H(_XML_Proc& obj_XML_Proc);

bool Create_Class_CPP(_XML_Proc& obj_XML_Proc);

void Create_Proc(_Proc_Define_Info obj_Proc_Define_Info, _XML_Proc obj_XML_Proc);

#endif
