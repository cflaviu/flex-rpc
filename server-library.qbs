import qbs 1.0

StaticLibrary {
    Depends { name: 'cpp' }
	consoleApplication: true
	cpp.cxxLanguageVersion: "c++20"
	cpp.enableRtti: false
	cpp.includePaths: ["api", "inc"]
	cpp.staticLibraries: "pthread"
	files: [
        "api/flex_rpc/message/call.hpp",
        "api/flex_rpc/message/call_cancel.hpp",
        "api/flex_rpc/message/connection.hpp",
        "api/flex_rpc/message/disconnection.hpp",
        "api/flex_rpc/message/discovery/event.hpp",
        "api/flex_rpc/message/discovery/method.hpp",
        "api/flex_rpc/message/discovery/object.hpp",
        "api/flex_rpc/message/discovery/parameter.hpp",
        "api/flex_rpc/message/dlt/activate.hpp",
        "api/flex_rpc/message/dlt/clear.hpp",
        "api/flex_rpc/message/dlt/configuration/change.hpp",
        "api/flex_rpc/message/dlt/configuration/reset.hpp",
        "api/flex_rpc/message/dlt/configuration/retrieve.hpp",
        "api/flex_rpc/message/dlt/deactivate.hpp",
        "api/flex_rpc/message/dlt/get_status.hpp",
        "api/flex_rpc/message/dlt/retrieve.hpp",
        "api/flex_rpc/message/event/generator/change.hpp",
        "api/flex_rpc/message/event/generator/create.hpp",
        "api/flex_rpc/message/event/generator/destroy.hpp",
        "api/flex_rpc/message/event/generator/retrieve.hpp",
        "api/flex_rpc/message/event/notification.hpp",
        "api/flex_rpc/message/event/subscription.hpp",
        "api/flex_rpc/message/event/unsubscription.hpp",
        "api/flex_rpc/message/feature.hpp",
        "api/flex_rpc/message/ping.hpp",
        "api/flex_rpc/message/type.hpp",
        "api/flex_rpc/message/variant.hpp",
    ]
	Group {     // Properties for the produced executable
	    name: "installer"
		fileTagsFilter: "application"
		qbs.install: true
		qbs.installDir: "bin"
	}
}
