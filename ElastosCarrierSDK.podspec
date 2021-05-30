#
#  Be sure to run `pod spec lint carrier.podspec.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  s.name         = 'ElastosCarrierSDK'
  s.version      = '6.0.3'
  s.summary      = 'Elastos Carrier iOS SDK Distribution.'
  s.swift_version = '4.0'
  s.description  = 'Elastos carrier ios sdk framework distribution.'
  s.homepage     = 'https://www.elastos.org'
  s.license      = { :type => 'GPLv3', :file => 'ElastosCarrier-framework/LICENSE' }
  s.author       = { 'carrier-dev' => 'support@elastos.org' }
  s.platform     = :ios, '9.0'
  s.ios.deployment_target = '9.0'
  s.source       = {'http':'https://github.com/elastos/Elastos.NET.Carrier.Swift.SDK/releases/download/release-v6.0.3/ElastosCarrier-framework.zip'}
  s.vendored_frameworks = 'ElastosCarrier-framework/*.framework'
  s.source_files = 'ElastosCarrier-framework/ElastosCarrierSDK.framework/**/*.h'

  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
