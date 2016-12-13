﻿/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
GacUI::Partial Classes

This file is generated by: Vczh GacUI Resource Code Generator
************************************************************************
DO NOT MODIFY
***********************************************************************/

#ifndef VCZH_GACUI_RESOURCE_CODE_GENERATOR_Demo_PARTIAL_CLASSES
#define VCZH_GACUI_RESOURCE_CODE_GENERATOR_Demo_PARTIAL_CLASSES

#include "GacUIReflection.h"

namespace demo
{
	class MainWindow;

	template<typename TImpl>
	class MainWindow_ : public ::vl::presentation::controls::GuiWindow, public vl::presentation::GuiInstancePartialClass<vl::presentation::controls::GuiWindow>, public vl::reflection::Description<TImpl>
	{
		friend struct vl::reflection::description::CustomTypeDescriptorSelector<TImpl>;
	private:
	protected:
		::vl::presentation::controls::GuiSelectableButton::MutexGroupController* radioGroup;

		void InitializeComponents()
		{
			if (InitializeFromResource())
			{
				GUI_INSTANCE_REFERENCE(radioGroup);
			}
			else
			{
			}
		}
	public:
		MainWindow_()
			:vl::presentation::GuiInstancePartialClass<::vl::presentation::controls::GuiWindow>(L"demo::MainWindow")
			,::vl::presentation::controls::GuiWindow(vl::presentation::theme::GetCurrentTheme()->CreateWindowStyle())
			,radioGroup(0)
		{
		}
	};

}
namespace vl
{
	namespace reflection
	{
		namespace description
		{
			DECL_TYPE_INFO(demo::MainWindow)

		}
	}
}
namespace demo
{
	class MainWindow : public demo::MainWindow_<demo::MainWindow>
	{
		friend class demo::MainWindow_<demo::MainWindow>;
		friend struct vl::reflection::description::CustomTypeDescriptorSelector<demo::MainWindow>;
	protected:

		// #region CLASS_MEMBER_GUIEVENT_HANDLER (DO NOT PUT OTHER CONTENT IN THIS #region.)
		void OnCreate();
		void OnDestroy();
		// #endregion CLASS_MEMBER_GUIEVENT_HANDLER
	public:
		MainWindow();
		~MainWindow();
	};
}



#endif
