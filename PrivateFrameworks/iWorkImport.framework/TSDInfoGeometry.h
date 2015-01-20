/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSDInfoGeometry : NSObject <TSDMixing, NSCopying, NSMutableCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGSize { 
        double width; 
        double height; 
    struct { 
        unsigned int widthValid : 1; 
        unsigned int heightValid : 1; 
        unsigned int horizontalFlip : 1; 
        unsigned int verticalFlip : 1; 
    double mAngle;
    } mFlags;
    } mPosition;
    } mSize;
}

@property(readonly) double angle;
@property(readonly) bool heightValid;
@property(readonly) bool horizontalFlip;
@property(readonly) struct CGPoint { double x1; double x2; } position;
@property(readonly) struct CGSize { double x1; double x2; } size;
@property(readonly) bool verticalFlip;
@property(readonly) bool widthValid;

+ (id)geometryFromFullTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 widthValid:(bool)arg2 heightValid:(bool)arg3;
+ (id)geometryFromFullTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (id)geometryFromTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 withSize:(struct CGSize { double x1; double x2; })arg2;

- (double)angle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsBeforeRotation;
- (struct CGPoint { double x1; double x2; })center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })fullTransform;
- (id)geometryByAppendingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)geometryRelativeToGeometry:(id)arg1;
- (id)geometryWithNewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)geometryWithParentGeometry:(id)arg1;
- (unsigned long long)hash;
- (bool)heightValid;
- (bool)horizontalFlip;
- (id)init;
- (id)initWithArchive:(const struct GeometryArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Point {} *x3; struct Size {} *x4; unsigned int x5; float x6; int x7; unsigned int x8[1]; }*)arg1;
- (id)initWithCenter:(struct CGPoint { double x1; double x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithFullTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 widthValid:(bool)arg2 heightValid:(bool)arg3;
- (id)initWithHeight:(double)arg1;
- (id)initWithLayoutGeometry:(id)arg1;
- (id)initWithPosition:(struct CGPoint { double x1; double x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 angle:(double)arg3;
- (id)initWithPosition:(struct CGPoint { double x1; double x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 widthValid:(bool)arg3 heightValid:(bool)arg4 horizontalFlip:(bool)arg5 verticalFlip:(bool)arg6 angle:(double)arg7;
- (id)initWithPosition:(struct CGPoint { double x1; double x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithTransformedBoundsOrigin:(struct CGPoint { double x1; double x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 angle:(double)arg3;
- (id)initWithTransformedBoundsOrigin:(struct CGPoint { double x1; double x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 horizontalFlip:(bool)arg3 verticalFlip:(bool)arg4 angle:(double)arg5;
- (id)initWithWidth:(double)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualExceptForPosition:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)normalizedGeometry;
- (struct CGPoint { double x1; double x2; })position;
- (void)saveToArchive:(struct GeometryArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Point {} *x3; struct Size {} *x4; unsigned int x5; float x6; int x7; unsigned int x8[1]; }*)arg1 archiver:(id)arg2;
- (struct CGSize { double x1; double x2; })size;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformBasedOnPoint:(struct CGPoint { double x1; double x2; })arg1 centeredAtPoint:(struct CGPoint { double x1; double x2; })arg2 withFlips:(bool)arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformBasedOnPoint:(struct CGPoint { double x1; double x2; })arg1 centeredAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformBasedOnRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformWithoutFlips;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transformedBounds;
- (struct CGPoint { double x1; double x2; })transformedBoundsOrigin;
- (bool)verticalFlip;
- (bool)widthValid;

@end