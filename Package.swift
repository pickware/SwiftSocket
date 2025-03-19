// swift-tools-version:5.10

import PackageDescription

let package = Package(
    name: "SwiftSocket",
    products: [
        .library(
            name: "SwiftSocket",
            targets: ["SwiftSocket"]
        )
    ],
    targets: [
        .target(
            name: "SwiftSocket",
            dependencies: ["YSocketC"],
            path: "Sources/SwiftSocket"
        ),
        .target(
            name: "YSocketC",
            path: "Sources/YSocketC",
            publicHeadersPath: "include",
            cSettings: [
                .headerSearchPath("include"),
            ]
        ),
    ],
    swiftLanguageVersions: [.v5]
)
