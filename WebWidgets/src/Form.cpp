//
// Form.cpp
//
// $Id: //poco/Main/WebWidgets/src/Form.cpp#6 $
//
// Library: WebWidgets
// Package: Views
// Module:  Form
//
// Copyright (c) 2008, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-execuForm object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#include "Poco/WebWidgets/Form.h"


namespace Poco {
namespace WebWidgets {


const std::string Form::METHOD_GET("GET");
const std::string Form::METHOD_POST("POST");
const std::string Form::ENCODING_URL("application/x-www-form-urlencoded");
const std::string Form::ENCODING_MULTIPART("multipart/form-data");


Form::Form(const Poco::URI& uri):
	ContainerView(typeid(Form)),
	_method(METHOD_POST),
	_encoding(ENCODING_MULTIPART),
	_uri(uri)
{
}

	
Form::Form(const std::string& name, const Poco::URI& uri):
	ContainerView(name, typeid(Form)),
	_method(METHOD_POST),
	_encoding(ENCODING_MULTIPART),
	_uri(uri)
{
}


Form::Form(const std::string& name, const std::type_info& type, const Poco::URI& uri):
	ContainerView(name, type),
	_method(METHOD_POST),
	_encoding(ENCODING_MULTIPART),
	_uri(uri)
{
}

	
Form::Form(const std::type_info& type, const Poco::URI& uri):
	ContainerView(type),
	_method(METHOD_POST),
	_encoding(ENCODING_MULTIPART),
	_uri(uri)
{
}


Form::~Form()
{
}


void Form::setMethod(const std::string& method)
{
	_method = method;
}


void Form::setEncoding(const std::string& encoding)
{
	_encoding = encoding;
}


} } // namespace Poco::WebWidgets