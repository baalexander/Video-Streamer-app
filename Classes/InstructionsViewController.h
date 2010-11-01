#import <UIKit/UIKit.h>
#import "DirectoryWatcher.h"


@interface InstructionsViewController : UIViewController <DirectoryWatcherDelegate,
                                                          UIDocumentInteractionControllerDelegate,
                                                          UITableViewDelegate,
                                                          UITableViewDataSource>
{
    @private
        UIView *addFromiTunesView_;
        UITableView *tableView_;
        UIView *sectionHeaderView_;
        UILabel *sectionHeaderLabel_;
        DirectoryWatcher *directoryWatcher_;
        NSMutableArray *documentUrls_;
        UIDocumentInteractionController *docInteractionController_;
}

@property (nonatomic, retain) IBOutlet UIView *addFromiTunesView;
@property (nonatomic, retain) IBOutlet UITableView *tableView;
@property (nonatomic, retain) IBOutlet UIView *sectionHeaderView;
@property (nonatomic, retain) IBOutlet UILabel *sectionHeaderLabel;

@end