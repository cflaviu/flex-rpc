import qbs 1.0

Project {
    references: [
        "client-library.qbs",
        "client-demo.qbs",
        "server-library.qbs",
        "server-demo.qbs",
        "test.qbs",
    ]
}
