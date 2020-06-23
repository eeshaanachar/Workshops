! pip3 install opencv-python

import cv2 as cv

img = cv.imread('image.png',  
                  cv.IMREAD_GRAYSCALE)
                  
height = len(img)
width = len(img[0])

#fill the manipulation code below

                  
cv.imwrite('output.png',img)
