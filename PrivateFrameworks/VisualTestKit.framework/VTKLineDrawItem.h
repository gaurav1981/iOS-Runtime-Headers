/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualTestKit.framework/VisualTestKit
 */

@interface VTKLineDrawItem : NSObject <VTKDrawItem> {
    UIColor * _color;
    long long  _orientation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
}

@property (nonatomic, readonly) UIColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } origin;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)color;
- (void)drawAtContext:(id)arg1;
- (id)initWitColor:(id)arg1 origin:(struct CGPoint { double x1; double x2; })arg2 orientation:(long long)arg3;
- (long long)orientation;
- (struct CGPoint { double x1; double x2; })origin;

@end
