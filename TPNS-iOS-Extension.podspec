Pod::Spec.new do |spec|
  spec.name					= 'TPNS-iOS-Extension'
  spec.version					= '1.3.9.1'
  spec.summary					= '腾讯移动推送(iOS)'
  spec.homepage					= 'https://cloud.tencent.com/product/tpns/'
  spec.authors					= 'tencent'
  spec.license					= 'MIT'
  spec.platform					= :ios, '10.0'
  spec.libraries        = 'z'
  spec.source					= { :git => 'https://github.com/TencentCloud/TPNS-iOS-CocoaPods', :branch => 'V1.3.9.1' }
  spec.source_files				= 'XGVIPPush/extension/XGExtension.h'
  spec.public_header_files = 'XGVIPPush/extension/XGExtension.h'
  spec.vendored_libraries			= 'XGVIPPush/extension/libXGExtension.a'
end
