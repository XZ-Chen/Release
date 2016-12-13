﻿/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
GacUI::AboutWindow

This file is generated by: Vczh GacUI Resource Code Generator
***********************************************************************/

#ifndef VCZH_GACUI_RESOURCE_CODE_GENERATOR_Demo_AboutWindow
#define VCZH_GACUI_RESOURCE_CODE_GENERATOR_Demo_AboutWindow

#include "DemoPartialClasses.h"

namespace demo
{
	class AboutWindow : public demo::AboutWindow_<demo::AboutWindow>
	{
		friend class demo::AboutWindow_<demo::AboutWindow>;
		friend struct vl::reflection::description::CustomTypeDescriptorSelector<demo::AboutWindow>;
	protected:

		// #region CLASS_MEMBER_GUIEVENT_HANDLER (DO NOT PUT OTHER CONTENT IN THIS #region.)
		void documentLabel_ActiveHyperlinkExecuted(GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs& arguments);
		void OnCreate();
		void OnDestroy();
		// #endregion CLASS_MEMBER_GUIEVENT_HANDLER
	public:
		AboutWindow();
		~AboutWindow();
	};
}

#endif
