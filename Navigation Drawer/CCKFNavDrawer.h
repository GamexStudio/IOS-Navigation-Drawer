

#import <UIKit/UIKit.h>

@protocol CCKFNavDrawerDelegate <NSObject>
@required
- (void)CCKFNavDrawerSelection:(NSInteger)selectionIndex;
@end

@interface CCKFNavDrawer : UINavigationController<UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) UIPanGestureRecognizer *pan_gr;
@property (weak, nonatomic)id<CCKFNavDrawerDelegate> CCKFNavDrawerDelegate;

- (void)drawerToggle;

@end
