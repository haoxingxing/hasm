cmake_minimum_required (VERSION 3.8)

aux_source_directory(. src)
add_executable (hasm ${src})
set_target_properties(hasm PROPERTIES DEBUG_POSTFIX "d") 
set_target_properties(hasm PROPERTIES OUTPUT_NAME "hasm.${FILENAME_SUFFIX}")
if (UNIX)
	TARGET_LINK_LIBRARIES(hasm dl)
endif()
link_directories(${OUTDIR})

