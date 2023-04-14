// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterD2",
    platforms: [.macOS(.v10_13), .iOS(v11)],
    products: [
        .library(name: "TreeSitterD2", targets: ["TreeSitterD2"]),
    ],
    dependencies: [],
    targets: [
        .target(
            name: "TreeSitterD2",
            path: ".",
            exclude: [
                "assets",
                "binding.gyp",
                "bindings",
                "Cargo.toml",
                "Cargo.lock",
                "dev",
                "examples",
                "flake.lock",
                "flake.nix",
                "grammer.json"
                "Makefile",
                "package.json"
                "README.md"
                "src/grammer.json",
                "src/node-types.json",
            ],
            sources: [
                "src/parser.c",
                "src/scanner.cc",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        )
    ]
)