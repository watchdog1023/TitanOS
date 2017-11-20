# TitanOS
AI:

compile:
  -fpermissive -Wwrite-strings -Wdeprecated-declarations -Wfatal-errors flags

Build:
  -static-libgcc -static-libstdc++ flags at start and -lchilkat-9.5.0 -lgdi32 -lcrypt32 -lws2_32 -ldnsapi -lwinmm -lwininet -lmingw32 -lopencv_core330.dll -lopencv_highgui330.dll -lopencv_imgproc330.dll -lopencv_imgcodecs330.dll -lopencv_videoio330.dll -lopencv_video330.dll -lboost_atomic -lboost_chrono -lboost_thread -lopennn -ltinyxml2 -lpython36 flags at end(include all the .o files when building)
