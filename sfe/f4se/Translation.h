#pragma once
#include <string>
class BSScaleformTranslator;

namespace Translation
{
	void ImportTranslationFiles(BSScaleformTranslator * translator);
	void ParseTranslation(BSScaleformTranslator * translator, std::string & name);
}
