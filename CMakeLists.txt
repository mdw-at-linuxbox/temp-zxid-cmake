cmake_minimum_required(VERSION 2.8.11)
project(zxid)

include(GNUInstallDirs)
find_package(Threads REQUIRED)

set(zxid_srcs c/zx-a-dec.c c/zx-ac-dec.c c/zx-as-dec.c c/zx-attrs.c
c/zx-b-dec.c c/zx-b12-dec.c c/zx-cb-dec.c c/zx-cdm-dec.c c/zx-dap-dec.c
c/zx-dec.c c/zx-demomed-dec.c c/zx-di-dec.c c/zx-di12-dec.c c/zx-dp-dec.c
c/zx-ds-dec.c c/zx-dst-dec.c c/zx-e-dec.c c/zx-ecp-dec.c c/zx-elems.c
c/zx-exca-dec.c c/zx-ff12-dec.c c/zx-gl-dec.c c/zx-hrxml-dec.c
c/zx-idhrxml-dec.c c/zx-idp-dec.c c/zx-idpdisc-dec.c c/zx-im-dec.c
c/zx-is-dec.c c/zx-is12-dec.c c/zx-lu-dec.c c/zx-m20-dec.c c/zx-md-dec.c
c/zx-mm7-dec.c c/zx-ns.c c/zx-paos-dec.c c/zx-pmm-dec.c c/zx-prov-dec.c
c/zx-ps-dec.c c/zx-sa-dec.c c/zx-sa11-dec.c c/zx-sbf-dec.c c/zx-sec-dec.c
c/zx-sec12-dec.c c/zx-shibmd-dec.c c/zx-shps-dec.c c/zx-sp-dec.c
c/zx-sp11-dec.c c/zx-subs-dec.c c/zx-tas3-dec.c c/zx-tas3sol-dec.c
c/zx-wsc-dec.c c/zx-wsp-dec.c c/zx-wsse-dec.c c/zx-wst-dec.c
c/zx-wsu-dec.c c/zx-xa-dec.c c/zx-xac-dec.c c/zx-xasa-dec.c
c/zx-xasacd1-dec.c c/zx-xasp-dec.c c/zx-xaspcd1-dec.c c/zx-xenc-dec.c
c/zx-xml-dec.c
match.c ykaes.c ykcrc.c zxcrypto.c zxidcdc.c zxidcgi.c zxidconf.c
zxidcurl.c zxiddec.c zxiddi.c zxidecp.c zxidepr.c zxididpx.c zxidim.c
zxidlib.c zxidloc.c zxidmda.c zxidmeta.c zxidmk.c zxidmkwsf.c zxidmni.c
zxidoauth.c zxidpdp.c zxidpep.c zxidpool.c zxidps.c zxidpsso.c zxidses.c
zxidsimp.c zxidslo.c zxidspx.c zxidsso.c zxiduser.c zxidwsc.c zxidwsf.c
zxidwsp.c zxlib.c zxlibdec.c zxlibenc.c zxlog.c zxns.c zxpw.c zxsig.c
zxutil.c)

set(zxid_public_headers c/zxidvers.h c/zx-data.h zxidconf.h zxidpriv.h
errmac.h zxidutil.h platform.h zxid.h zxidnoswig.h zx.h)


add_library(zxid STATIC ${zxid_srcs})
set_property(TARGET zxid
    APPEND PROPERTY COMPILE_DEFINITIONS
USE_ZXID
USE_SSL
USE_CURL
USE_OPENSSL
_REENTRANT
DEBUG
MUTEX_DEBUG=1
ENA_MCDB=1
ENA_STOMP
ENA_HTTP
LINUX)

# several things include <zx/foo> instead of foo
add_custom_target(zx-target DEPENDS ${CMAKE_BINARY_DIR}/zx)
add_custom_command(OUTPUT ${CMAKE_BINARY_DIR}/zx
COMMAND ln -s ${CMAKE_SOURCE_DIR} ${CMAKE_BINARY_DIR}/zx)
add_dependencies(zxid zx-target)
#set_property(TARGET zxid APPEND PROPERTY OBJECT_DEPENDS zx)

include_directories(${PROJECT_SOURCE_DIR} ${PROJECT_SOURCE_DIR}/c)
include_directories(${CMAKE_BINARY_DIR} ${PROJECT_SOURCE_DIR}
${PROJECT_SOURCE_DIR}/c)

if(THREADS_HAVE_PTHREAD_ARG)
  set_property(TARGET zxid APPEND PROPERTY COMPILE_DEFINITIONS USE_PTHREAD)
  target_compile_options(PUBLIC zxid "-pthread")
endif(THREADS_HAVE_PTHREAD_ARG)

install(TARGETS zxid DESTINATION ${CMAKE_INSTALL_LIBDIR})
install(FILES ${zxid_public_headers} DESTINATION include/zx)
