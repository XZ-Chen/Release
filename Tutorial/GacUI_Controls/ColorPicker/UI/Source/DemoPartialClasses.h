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
	class IColorItem;
	class IViewModel;
	class ColorBomboItemTemplate;
	class ColorListItemTemplate;
	class MainWindow;

	class IColorItem : public virtual ::vl::reflection::IDescriptable, public vl::reflection::Description<IColorItem>
	{
	public:
		virtual ::vl::WString GetItemName() = 0;
		virtual ::vl::presentation::Color GetItemColor() = 0;
	};

	class IViewModel : public virtual ::vl::reflection::IDescriptable, public vl::reflection::Description<IViewModel>
	{
	public:
		virtual vl::collections::LazyList<vl::Ptr<::demo::IColorItem>> GetColorItems() = 0;
	};

	template<typename TImpl>
	class ColorBomboItemTemplate_ : public ::vl::presentation::templates::GuiControlTemplate, public vl::presentation::GuiInstancePartialClass<vl::presentation::templates::GuiControlTemplate>, public vl::reflection::Description<TImpl>
	{
		friend struct vl::reflection::description::CustomTypeDescriptorSelector<TImpl>;
	private:
		Ptr<demo::IColorItem> ViewModel_;
		::vl::presentation::Color TextColor_;
	protected:
		::vl::presentation::templates::GuiControlTemplate* self;

		void InitializeComponents(Ptr<demo::IColorItem> ViewModel)
		{
			ViewModel_ = ViewModel;
			if (InitializeFromResource())
			{
				GUI_INSTANCE_REFERENCE(self);
			}
			else
			{
				ViewModel_ = 0;
			}
		}
	public:
		ColorBomboItemTemplate_()
			:vl::presentation::GuiInstancePartialClass<::vl::presentation::templates::GuiControlTemplate>(L"demo::ColorBomboItemTemplate")
			,self(0)
		{
			this->TextColor = vl::reflection::description::UnboxValue<::vl::presentation::Color>(
			[]()
			{
				vl::reflection::description::Value value;
				reflection::description::GetTypeDescriptor<::vl::presentation::Color>()->GetSerializableType()->Deserialize(L"", value);
				return value;
			}());
		}

		Ptr<demo::IColorItem> GetViewModel()
		{
			return ViewModel_;
		}

		vl::Event<void()> TextColorChanged;

		::vl::presentation::Color GetTextColor()
		{
			return TextColor_;
		}

		void SetTextColor(::vl::presentation::Color value)
		{
			TextColor_ = value;
			TextColorChanged();
		}
	};

	template<typename TImpl>
	class ColorListItemTemplate_ : public ::vl::presentation::templates::GuiTextListItemTemplate, public vl::presentation::GuiInstancePartialClass<vl::presentation::templates::GuiTextListItemTemplate>, public vl::reflection::Description<TImpl>
	{
		friend struct vl::reflection::description::CustomTypeDescriptorSelector<TImpl>;
	private:
		Ptr<demo::IColorItem> ViewModel_;
	protected:
		::vl::presentation::templates::GuiTextListItemTemplate* self;

		void InitializeComponents(Ptr<demo::IColorItem> ViewModel)
		{
			ViewModel_ = ViewModel;
			if (InitializeFromResource())
			{
				GUI_INSTANCE_REFERENCE(self);
			}
			else
			{
				ViewModel_ = 0;
			}
		}
	public:
		ColorListItemTemplate_()
			:vl::presentation::GuiInstancePartialClass<::vl::presentation::templates::GuiTextListItemTemplate>(L"demo::ColorListItemTemplate")
			,self(0)
		{
		}

		Ptr<demo::IColorItem> GetViewModel()
		{
			return ViewModel_;
		}
	};

	template<typename TImpl>
	class MainWindow_ : public ::vl::presentation::controls::GuiWindow, public vl::presentation::GuiInstancePartialClass<vl::presentation::controls::GuiWindow>, public vl::reflection::Description<TImpl>
	{
		friend struct vl::reflection::description::CustomTypeDescriptorSelector<TImpl>;
	private:
		Ptr<demo::IViewModel> ViewModel_;
	protected:

		void InitializeComponents(Ptr<demo::IViewModel> ViewModel)
		{
			ViewModel_ = ViewModel;
			if (InitializeFromResource())
			{
			}
			else
			{
				ViewModel_ = 0;
			}
		}
	public:
		MainWindow_()
			:vl::presentation::GuiInstancePartialClass<::vl::presentation::controls::GuiWindow>(L"demo::MainWindow")
			,::vl::presentation::controls::GuiWindow(vl::presentation::theme::GetCurrentTheme()->CreateWindowStyle())
		{
		}

		Ptr<demo::IViewModel> GetViewModel()
		{
			return ViewModel_;
		}
	};

}
namespace vl
{
	namespace reflection
	{
		namespace description
		{
			DECL_TYPE_INFO(demo::IColorItem)
			DECL_TYPE_INFO(demo::IViewModel)
			DECL_TYPE_INFO(demo::ColorBomboItemTemplate)
			DECL_TYPE_INFO(demo::ColorListItemTemplate)
			DECL_TYPE_INFO(demo::MainWindow)

		}
	}
}
namespace demo
{
	class ColorBomboItemTemplate : public demo::ColorBomboItemTemplate_<demo::ColorBomboItemTemplate>
	{
		friend class demo::ColorBomboItemTemplate_<demo::ColorBomboItemTemplate>;
		friend struct vl::reflection::description::CustomTypeDescriptorSelector<demo::ColorBomboItemTemplate>;
	protected:

		// #region CLASS_MEMBER_GUIEVENT_HANDLER (DO NOT PUT OTHER CONTENT IN THIS #region.)
		void OnCreate();
		void OnDestroy();
		// #endregion CLASS_MEMBER_GUIEVENT_HANDLER
	public:
		ColorBomboItemTemplate(Ptr<demo::IColorItem> ViewModel);
		~ColorBomboItemTemplate();
	};
}


namespace demo
{
	class ColorListItemTemplate : public demo::ColorListItemTemplate_<demo::ColorListItemTemplate>
	{
		friend class demo::ColorListItemTemplate_<demo::ColorListItemTemplate>;
		friend struct vl::reflection::description::CustomTypeDescriptorSelector<demo::ColorListItemTemplate>;
	protected:

		// #region CLASS_MEMBER_GUIEVENT_HANDLER (DO NOT PUT OTHER CONTENT IN THIS #region.)
		void OnCreate();
		void OnDestroy();
		// #endregion CLASS_MEMBER_GUIEVENT_HANDLER
	public:
		ColorListItemTemplate(Ptr<demo::IColorItem> ViewModel);
		~ColorListItemTemplate();
	};
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
		MainWindow(Ptr<demo::IViewModel> ViewModel);
		~MainWindow();
	};
}



#endif
