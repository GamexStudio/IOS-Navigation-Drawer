//
//  ViewController.m
//  Navigation Drawer
//
//
//  We have follow https://github.com/calvinchankf/CCKFNavDrawer
//

#import "ViewController.h"

@interface ViewController ()
@property (strong, nonatomic) CCKFNavDrawer *rootNav;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.rootNav = (CCKFNavDrawer *)self.navigationController;
    [self.rootNav setCCKFNavDrawerDelegate:self];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (IBAction)drawerToggle:(id)sender{
    
        [self.rootNav drawerToggle];
}

-(void)CCKFNavDrawerSelection:(NSInteger)selectionIndex
{
    NSLog(@"selected = %i", selectionIndex);
   _lbltext.text = [NSString stringWithFormat:@"%i",selectionIndex];
}



@end
