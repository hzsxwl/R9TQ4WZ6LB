#
# Be sure to run `pod lib lint R9TQ4WZ6LB.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'R9TQ4WZ6LB'
  s.version          = '5.4.1'
  s.summary          = 'sdk R9TQ4WZ6LB.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/hzsxwl/R9TQ4WZ6LB'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '3318596470@qq.com' => '3318596470@qq.com' }
  s.source           = { :git => 'https://github.com/hzsxwl/R9TQ4WZ6LB.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.0'

  s.source_files = 'R9TQ4WZ6LB/Classes/**/*'
  s.public_header_files = ['R9TQ4WZ6LB/Classes/**/QelvAdSuite.h', 'R9TQ4WZ6LB/Classes/**/QelvAdEngine.h', 'R9TQ4WZ6LB/Classes/**/QelvAdOrder.h', 'R9TQ4WZ6LB/Classes/**/QelvColdstartAd.h', 'R9TQ4WZ6LB/Classes/**/QelvMidwayAd.h', 'R9TQ4WZ6LB/Classes/**/QelvGratifyAd.h', 'R9TQ4WZ6LB/Classes/**/QelvMarqueeAd.h', 'R9TQ4WZ6LB/Classes/**/QelvTileAd.h', 'R9TQ4WZ6LB/Classes/**/QelvTileBatch.h', 'R9TQ4WZ6LB/Classes/**/QelvTileCanvas.h']
  s.vendored_libraries = 'R9TQ4WZ6LB/Libraries/libR9TQ4WZ6LB-iOS.a'

  s.frameworks = "Foundation","UIKit","MobileCoreServices","CoreGraphics","Security","SystemConfiguration","CoreTelephony","AdSupport","CoreData","StoreKit","AVFoundation","MediaPlayer","CoreMedia","WebKit","Accelerate","CoreLocation","AVKit","MessageUI","QuickLook","AudioToolBox","JavaScriptCore","CoreMotion","Photos"
  s.libraries = "z","resolv.9","sqlite3","c++","c++abi"
  s.dependency 'ToBid-iOS/GDTAdapter','5.5.3'
  s.dependency 'ToBid-iOS/AdScopeAdapter','5.5.3'
  s.static_framework = true
end
