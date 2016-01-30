/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSTestMediaQueryListListener.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "MediaQueryListListener.h"
#include "TestMediaQueryListListener.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSTestMediaQueryListListenerTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestMediaQueryListListenerConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSTestMediaQueryListListenerTable = { 2, 1, JSTestMediaQueryListListenerTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSTestMediaQueryListListenerConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSTestMediaQueryListListenerConstructorTable = { 1, 0, JSTestMediaQueryListListenerConstructorTableValues, 0 };
const ClassInfo JSTestMediaQueryListListenerConstructor::s_info = { "TestMediaQueryListListenerConstructor", &Base::s_info, &JSTestMediaQueryListListenerConstructorTable, 0, CREATE_METHOD_TABLE(JSTestMediaQueryListListenerConstructor) };

JSTestMediaQueryListListenerConstructor::JSTestMediaQueryListListenerConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSTestMediaQueryListListenerConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSTestMediaQueryListListenerPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSTestMediaQueryListListenerConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTestMediaQueryListListenerConstructor, JSDOMWrapper>(exec, &JSTestMediaQueryListListenerConstructorTable, jsCast<JSTestMediaQueryListListenerConstructor*>(cell), propertyName, slot);
}

bool JSTestMediaQueryListListenerConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSTestMediaQueryListListenerConstructor, JSDOMWrapper>(exec, &JSTestMediaQueryListListenerConstructorTable, jsCast<JSTestMediaQueryListListenerConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSTestMediaQueryListListenerPrototypeTableValues[] =
{
    { "method", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsTestMediaQueryListListenerPrototypeFunctionMethod), (intptr_t)1, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSTestMediaQueryListListenerPrototypeTable = { 2, 1, JSTestMediaQueryListListenerPrototypeTableValues, 0 };
const ClassInfo JSTestMediaQueryListListenerPrototype::s_info = { "TestMediaQueryListListenerPrototype", &Base::s_info, &JSTestMediaQueryListListenerPrototypeTable, 0, CREATE_METHOD_TABLE(JSTestMediaQueryListListenerPrototype) };

JSObject* JSTestMediaQueryListListenerPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSTestMediaQueryListListener>(exec, globalObject);
}

bool JSTestMediaQueryListListenerPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSTestMediaQueryListListenerPrototype* thisObject = jsCast<JSTestMediaQueryListListenerPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSTestMediaQueryListListenerPrototypeTable, thisObject, propertyName, slot);
}

bool JSTestMediaQueryListListenerPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSTestMediaQueryListListenerPrototype* thisObject = jsCast<JSTestMediaQueryListListenerPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSTestMediaQueryListListenerPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSTestMediaQueryListListener::s_info = { "TestMediaQueryListListener", &Base::s_info, &JSTestMediaQueryListListenerTable, 0 , CREATE_METHOD_TABLE(JSTestMediaQueryListListener) };

JSTestMediaQueryListListener::JSTestMediaQueryListListener(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<TestMediaQueryListListener> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSTestMediaQueryListListener::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSTestMediaQueryListListener::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSTestMediaQueryListListenerPrototype::create(exec->vm(), globalObject, JSTestMediaQueryListListenerPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSTestMediaQueryListListener::destroy(JSC::JSCell* cell)
{
    JSTestMediaQueryListListener* thisObject = static_cast<JSTestMediaQueryListListener*>(cell);
    thisObject->JSTestMediaQueryListListener::~JSTestMediaQueryListListener();
}

JSTestMediaQueryListListener::~JSTestMediaQueryListListener()
{
    releaseImplIfNotNull();
}

bool JSTestMediaQueryListListener::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSTestMediaQueryListListener* thisObject = jsCast<JSTestMediaQueryListListener*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSTestMediaQueryListListener, Base>(exec, &JSTestMediaQueryListListenerTable, thisObject, propertyName, slot);
}

bool JSTestMediaQueryListListener::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSTestMediaQueryListListener* thisObject = jsCast<JSTestMediaQueryListListener*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSTestMediaQueryListListener, Base>(exec, &JSTestMediaQueryListListenerTable, thisObject, propertyName, descriptor);
}

JSValue jsTestMediaQueryListListenerConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTestMediaQueryListListener* domObject = jsCast<JSTestMediaQueryListListener*>(asObject(slotBase));
    return JSTestMediaQueryListListener::getConstructor(exec, domObject->globalObject());
}

JSValue JSTestMediaQueryListListener::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestMediaQueryListListenerConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsTestMediaQueryListListenerPrototypeFunctionMethod(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSTestMediaQueryListListener::s_info))
        return throwVMTypeError(exec);
    JSTestMediaQueryListListener* castedThis = jsCast<JSTestMediaQueryListListener*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSTestMediaQueryListListener::s_info);
    TestMediaQueryListListener* impl = static_cast<TestMediaQueryListListener*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    RefPtr<MediaQueryListListener> listener(MediaQueryListListener::create(ScriptValue(exec->vm(), exec->argument(0))));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->method(listener);
    return JSValue::encode(jsUndefined());
}

static inline bool isObservable(JSTestMediaQueryListListener* jsTestMediaQueryListListener)
{
    if (jsTestMediaQueryListListener->hasCustomProperties())
        return true;
    return false;
}

bool JSTestMediaQueryListListenerOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSTestMediaQueryListListener* jsTestMediaQueryListListener = jsCast<JSTestMediaQueryListListener*>(handle.get().asCell());
    if (!isObservable(jsTestMediaQueryListListener))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSTestMediaQueryListListenerOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSTestMediaQueryListListener* jsTestMediaQueryListListener = jsCast<JSTestMediaQueryListListener*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsTestMediaQueryListListener->impl(), jsTestMediaQueryListListener);
    jsTestMediaQueryListListener->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7TestMediaQueryListListener@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore26TestMediaQueryListListenerE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, TestMediaQueryListListener* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSTestMediaQueryListListener>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7TestMediaQueryListListener@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore26TestMediaQueryListListenerE[2];
#if COMPILER(CLANG)
    // If this fails TestMediaQueryListListener does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(TestMediaQueryListListener), TestMediaQueryListListener_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // TestMediaQueryListListener has subclasses. If TestMediaQueryListListener has subclasses that get passed
    // to toJS() we currently require TestMediaQueryListListener you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<TestMediaQueryListListener>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSTestMediaQueryListListener>(exec, globalObject, impl);
}

TestMediaQueryListListener* toTestMediaQueryListListener(JSC::JSValue value)
{
    return value.inherits(&JSTestMediaQueryListListener::s_info) ? jsCast<JSTestMediaQueryListListener*>(asObject(value))->impl() : 0;
}

}
