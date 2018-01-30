/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "bin/default/librpc/gen_ndr/winspool.h"

#ifndef _HEADER_NDR_iremotewinspool
#define _HEADER_NDR_iremotewinspool

#define NDR_IREMOTEWINSPOOL_UUID "76f03f96-cdfd-44fc-a22c-64950a001209"
#define NDR_IREMOTEWINSPOOL_VERSION 1.0
#define NDR_IREMOTEWINSPOOL_NAME "iremotewinspool"
#define NDR_IREMOTEWINSPOOL_HELPSTRING "IRemoteWinspool SubSystem"
extern const struct ndr_interface_table ndr_table_iremotewinspool;
#define NDR_WINSPOOL_ASYNCOPENPRINTER (0x00)

#define NDR_WINSPOOL_ASYNCADDPRINTER (0x01)

#define NDR_WINSPOOL_ASYNCSETJOB (0x02)

#define NDR_WINSPOOL_ASYNCGETJOB (0x03)

#define NDR_WINSPOOL_ASYNCENUMJOBS (0x04)

#define NDR_WINSPOOL_ASYNCADDJOB (0x05)

#define NDR_WINSPOOL_ASYNCSCHEDULEJOB (0x06)

#define NDR_WINSPOOL_ASYNCDELETEPRINTER (0x07)

#define NDR_WINSPOOL_ASYNCSETPRINTER (0x08)

#define NDR_WINSPOOL_ASYNCGETPRINTER (0x09)

#define NDR_WINSPOOL_ASYNCSTARTDOCPRINTER (0x0a)

#define NDR_WINSPOOL_ASYNCSTARTPAGEPRINTER (0x0b)

#define NDR_WINSPOOL_ASYNCWRITEPRINTER (0x0c)

#define NDR_WINSPOOL_ASYNCENDPAGEPRINTER (0x0d)

#define NDR_WINSPOOL_ASYNCENDDOCPRINTER (0x0e)

#define NDR_WINSPOOL_ASYNCABORTPRINTER (0x0f)

#define NDR_WINSPOOL_ASYNCGETPRINTERDATA (0x10)

#define NDR_WINSPOOL_ASYNCGETPRINTERDATAEX (0x11)

#define NDR_WINSPOOL_ASYNCSETPRINTERDATA (0x12)

#define NDR_WINSPOOL_ASYNCSETPRINTERDATAEX (0x13)

#define NDR_WINSPOOL_ASYNCCLOSEPRINTER (0x14)

#define NDR_WINSPOOL_ASYNCADDFORM (0x15)

#define NDR_WINSPOOL_ASYNCDELETEFORM (0x16)

#define NDR_WINSPOOL_ASYNCGETFORM (0x17)

#define NDR_WINSPOOL_ASYNCSETFORM (0x18)

#define NDR_WINSPOOL_ASYNCENUMFORMS (0x19)

#define NDR_WINSPOOL_ASYNCGETPRINTERDRIVER (0x1a)

#define NDR_WINSPOOL_ASYNCENUMPRINTERDATA (0x1b)

#define NDR_WINSPOOL_ASYNCENUMPRINTERDATAEX (0x1c)

#define NDR_WINSPOOL_ASYNCENUMPRINTERKEY (0x1d)

#define NDR_WINSPOOL_ASYNCDELETEPRINTERDATA (0x1e)

#define NDR_WINSPOOL_ASYNCDELETEPRINTERDATAEX (0x1f)

#define NDR_WINSPOOL_ASYNCDELETEPRINTERKEY (0x20)

#define NDR_WINSPOOL_ASYNCXCVDATA (0x21)

#define NDR_WINSPOOL_ASYNCSENDRECVBIDIDATA (0x22)

#define NDR_WINSPOOL_ASYNCCREATEPRINTERIC (0x23)

#define NDR_WINSPOOL_ASYNCPLAYGDISCRIPTONPRINTERIC (0x24)

#define NDR_WINSPOOL_ASYNCDELETEPRINTERIC (0x25)

#define NDR_WINSPOOL_ASYNCENUMPRINTERS (0x26)

#define NDR_WINSPOOL_ASYNCADDPRINTERDRIVER (0x27)

#define NDR_WINSPOOL_ASYNCENUMPRINTERDRIVERS (0x28)

#define NDR_WINSPOOL_ASYNCGETPRINTERDRIVERDIRECTORY (0x29)

#define NDR_WINSPOOL_ASYNCDELETEPRINTERDRIVER (0x2a)

#define NDR_WINSPOOL_ASYNCDELETEPRINTERDRIVEREX (0x2b)

#define NDR_WINSPOOL_ASYNCADDPRINTPROCESSOR (0x2c)

#define NDR_WINSPOOL_ASYNCENUMPRINTPROCESSORS (0x2d)

#define NDR_WINSPOOL_ASYNCGETPRINTPROCESSORDIRECTORY (0x2e)

#define NDR_WINSPOOL_ASYNCENUMPORTS (0x2f)

#define NDR_WINSPOOL_ASYNCENUMMONITORS (0x30)

#define NDR_WINSPOOL_ASYNCADDPORT (0x31)

#define NDR_WINSPOOL_ASYNCSETPORT (0x32)

#define NDR_WINSPOOL_ASYNCADDMONITOR (0x33)

#define NDR_WINSPOOL_ASYNCDELETEMONITOR (0x34)

#define NDR_WINSPOOL_ASYNCDELETEPRINTPROCESSOR (0x35)

#define NDR_WINSPOOL_ASYNCENUMPRINTPROCESSORDATATYPES (0x36)

#define NDR_WINSPOOL_ASYNCADDPERMACHINECONNECTION (0x37)

#define NDR_WINSPOOL_ASYNCDELETEPERMACHINECONNECTION (0x38)

#define NDR_WINSPOOL_ASYNCENUMPERMACHINECONNECTIONS (0x39)

#define NDR_WINSPOOL_SYNCREGISTERFORREMOTENOTIFICATIONS (0x3a)

#define NDR_WINSPOOL_SYNCUNREGISTERFORREMOTENOTIFICATIONS (0x3b)

#define NDR_WINSPOOL_SYNCREFRESHREMOTENOTIFICATIONS (0x3c)

#define NDR_WINSPOOL_ASYNCGETREMOTENOTIFICATIONS (0x3d)

#define NDR_WINSPOOL_ASYNCINSTALLPRINTERDRIVERFROMPACKAGE (0x3e)

#define NDR_WINSPOOL_ASYNCUPLOADPRINTERDRIVERPACKAGE (0x3f)

#define NDR_WINSPOOL_ASYNCGETCOREPRINTERDRIVERS (0x40)

#define NDR_WINSPOOL_ASYNCCOREPRINTERDRIVERINSTALLED (0x41)

#define NDR_WINSPOOL_ASYNCGETPRINTERDRIVERPACKAGEPATH (0x42)

#define NDR_WINSPOOL_ASYNCDELETEPRINTERDRIVERPACKAGE (0x43)

#define NDR_WINSPOOL_ASYNCREADPRINTER (0x44)

#define NDR_WINSPOOL_ASYNCRESETPRINTER (0x45)

#define NDR_WINSPOOL_ASYNCGETJOBNAMEDPROPERTYVALUE (0x46)

#define NDR_WINSPOOL_ASYNCSETJOBNAMEDPROPERTY (0x47)

#define NDR_WINSPOOL_ASYNCDELETEJOBNAMEDPROPERTY (0x48)

#define NDR_WINSPOOL_ASYNCENUMJOBNAMEDPROPERTIES (0x49)

#define NDR_WINSPOOL_ASYNCLOGJOBINFOFORBRANCHOFFICE (0x4a)

#define NDR_IREMOTEWINSPOOL_CALL_COUNT (75)
void ndr_print_winspool_NOTIFY_REPLY_CONTAINER(struct ndr_print *ndr, const char *name, const struct winspool_NOTIFY_REPLY_CONTAINER *r);
void ndr_print_winspool_NOTIFY_OPTIONS_CONTAINER(struct ndr_print *ndr, const char *name, const struct winspool_NOTIFY_OPTIONS_CONTAINER *r);
void ndr_print_winspool_PrintPropertyType(struct ndr_print *ndr, const char *name, enum winspool_PrintPropertyType r);
void ndr_print_winspool_PrintPropertyValueUnion(struct ndr_print *ndr, const char *name, const union winspool_PrintPropertyValueUnion *r);
void ndr_print_winspool_PrintPropertyValue(struct ndr_print *ndr, const char *name, const struct winspool_PrintPropertyValue *r);
void ndr_print_winspool_PrintNamedProperty(struct ndr_print *ndr, const char *name, const struct winspool_PrintNamedProperty *r);
void ndr_print_winspool_PrintPropertiesCollection(struct ndr_print *ndr, const char *name, const struct winspool_PrintPropertiesCollection *r);
void ndr_print_winspool_InstallPrinterDriverFromPackageFlags(struct ndr_print *ndr, const char *name, uint32_t r);
void ndr_print_winspool_UploadPrinterDriverPackageFlags(struct ndr_print *ndr, const char *name, uint32_t r);
enum ndr_err_code ndr_push_winspool_AsyncOpenPrinter(struct ndr_push *ndr, int flags, const struct winspool_AsyncOpenPrinter *r);
enum ndr_err_code ndr_pull_winspool_AsyncOpenPrinter(struct ndr_pull *ndr, int flags, struct winspool_AsyncOpenPrinter *r);
void ndr_print_winspool_AsyncOpenPrinter(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncOpenPrinter *r);
void ndr_print_winspool_AsyncAddPrinter(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncAddPrinter *r);
void ndr_print_winspool_AsyncSetJob(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncSetJob *r);
void ndr_print_winspool_AsyncGetJob(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncGetJob *r);
void ndr_print_winspool_AsyncEnumJobs(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncEnumJobs *r);
void ndr_print_winspool_AsyncAddJob(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncAddJob *r);
void ndr_print_winspool_AsyncScheduleJob(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncScheduleJob *r);
void ndr_print_winspool_AsyncDeletePrinter(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncDeletePrinter *r);
enum ndr_err_code ndr_push_winspool_AsyncSetPrinter(struct ndr_push *ndr, int flags, const struct winspool_AsyncSetPrinter *r);
enum ndr_err_code ndr_pull_winspool_AsyncSetPrinter(struct ndr_pull *ndr, int flags, struct winspool_AsyncSetPrinter *r);
void ndr_print_winspool_AsyncSetPrinter(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncSetPrinter *r);
enum ndr_err_code ndr_push_winspool_AsyncGetPrinter(struct ndr_push *ndr, int flags, const struct winspool_AsyncGetPrinter *r);
enum ndr_err_code ndr_pull_winspool_AsyncGetPrinter(struct ndr_pull *ndr, int flags, struct winspool_AsyncGetPrinter *r);
void ndr_print_winspool_AsyncGetPrinter(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncGetPrinter *r);
void ndr_print_winspool_AsyncStartDocPrinter(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncStartDocPrinter *r);
void ndr_print_winspool_AsyncStartPagePrinter(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncStartPagePrinter *r);
void ndr_print_winspool_AsyncWritePrinter(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncWritePrinter *r);
void ndr_print_winspool_AsyncEndPagePrinter(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncEndPagePrinter *r);
void ndr_print_winspool_AsyncEndDocPrinter(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncEndDocPrinter *r);
void ndr_print_winspool_AsyncAbortPrinter(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncAbortPrinter *r);
enum ndr_err_code ndr_push_winspool_AsyncGetPrinterData(struct ndr_push *ndr, int flags, const struct winspool_AsyncGetPrinterData *r);
enum ndr_err_code ndr_pull_winspool_AsyncGetPrinterData(struct ndr_pull *ndr, int flags, struct winspool_AsyncGetPrinterData *r);
void ndr_print_winspool_AsyncGetPrinterData(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncGetPrinterData *r);
void ndr_print_winspool_AsyncGetPrinterDataEx(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncGetPrinterDataEx *r);
void ndr_print_winspool_AsyncSetPrinterData(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncSetPrinterData *r);
void ndr_print_winspool_AsyncSetPrinterDataEx(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncSetPrinterDataEx *r);
enum ndr_err_code ndr_push_winspool_AsyncClosePrinter(struct ndr_push *ndr, int flags, const struct winspool_AsyncClosePrinter *r);
enum ndr_err_code ndr_pull_winspool_AsyncClosePrinter(struct ndr_pull *ndr, int flags, struct winspool_AsyncClosePrinter *r);
void ndr_print_winspool_AsyncClosePrinter(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncClosePrinter *r);
void ndr_print_winspool_AsyncAddForm(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncAddForm *r);
void ndr_print_winspool_AsyncDeleteForm(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncDeleteForm *r);
void ndr_print_winspool_AsyncGetForm(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncGetForm *r);
void ndr_print_winspool_AsyncSetForm(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncSetForm *r);
enum ndr_err_code ndr_push_winspool_AsyncEnumForms(struct ndr_push *ndr, int flags, const struct winspool_AsyncEnumForms *r);
enum ndr_err_code ndr_pull_winspool_AsyncEnumForms(struct ndr_pull *ndr, int flags, struct winspool_AsyncEnumForms *r);
void ndr_print_winspool_AsyncEnumForms(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncEnumForms *r);
enum ndr_err_code ndr_push_winspool_AsyncGetPrinterDriver(struct ndr_push *ndr, int flags, const struct winspool_AsyncGetPrinterDriver *r);
enum ndr_err_code ndr_pull_winspool_AsyncGetPrinterDriver(struct ndr_pull *ndr, int flags, struct winspool_AsyncGetPrinterDriver *r);
void ndr_print_winspool_AsyncGetPrinterDriver(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncGetPrinterDriver *r);
void ndr_print_winspool_AsyncEnumPrinterData(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncEnumPrinterData *r);
enum ndr_err_code ndr_push_winspool_AsyncEnumPrinterDataEx(struct ndr_push *ndr, int flags, const struct winspool_AsyncEnumPrinterDataEx *r);
enum ndr_err_code ndr_pull_winspool_AsyncEnumPrinterDataEx(struct ndr_pull *ndr, int flags, struct winspool_AsyncEnumPrinterDataEx *r);
void ndr_print_winspool_AsyncEnumPrinterDataEx(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncEnumPrinterDataEx *r);
enum ndr_err_code ndr_push_winspool_AsyncEnumPrinterKey(struct ndr_push *ndr, int flags, const struct winspool_AsyncEnumPrinterKey *r);
enum ndr_err_code ndr_pull_winspool_AsyncEnumPrinterKey(struct ndr_pull *ndr, int flags, struct winspool_AsyncEnumPrinterKey *r);
void ndr_print_winspool_AsyncEnumPrinterKey(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncEnumPrinterKey *r);
void ndr_print_winspool_AsyncDeletePrinterData(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncDeletePrinterData *r);
void ndr_print_winspool_AsyncDeletePrinterDataEx(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncDeletePrinterDataEx *r);
void ndr_print_winspool_AsyncDeletePrinterKey(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncDeletePrinterKey *r);
void ndr_print_winspool_AsyncXcvData(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncXcvData *r);
void ndr_print_winspool_AsyncSendRecvBidiData(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncSendRecvBidiData *r);
void ndr_print_winspool_AsyncCreatePrinterIC(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncCreatePrinterIC *r);
void ndr_print_winspool_AsyncPlayGdiScriptOnPrinterIC(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncPlayGdiScriptOnPrinterIC *r);
void ndr_print_winspool_AsyncDeletePrinterIC(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncDeletePrinterIC *r);
void ndr_print_winspool_AsyncEnumPrinters(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncEnumPrinters *r);
enum ndr_err_code ndr_push_winspool_AsyncAddPrinterDriver(struct ndr_push *ndr, int flags, const struct winspool_AsyncAddPrinterDriver *r);
enum ndr_err_code ndr_pull_winspool_AsyncAddPrinterDriver(struct ndr_pull *ndr, int flags, struct winspool_AsyncAddPrinterDriver *r);
void ndr_print_winspool_AsyncAddPrinterDriver(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncAddPrinterDriver *r);
void ndr_print_winspool_AsyncEnumPrinterDrivers(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncEnumPrinterDrivers *r);
enum ndr_err_code ndr_push_winspool_AsyncGetPrinterDriverDirectory(struct ndr_push *ndr, int flags, const struct winspool_AsyncGetPrinterDriverDirectory *r);
enum ndr_err_code ndr_pull_winspool_AsyncGetPrinterDriverDirectory(struct ndr_pull *ndr, int flags, struct winspool_AsyncGetPrinterDriverDirectory *r);
void ndr_print_winspool_AsyncGetPrinterDriverDirectory(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncGetPrinterDriverDirectory *r);
void ndr_print_winspool_AsyncDeletePrinterDriver(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncDeletePrinterDriver *r);
void ndr_print_winspool_AsyncDeletePrinterDriverEx(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncDeletePrinterDriverEx *r);
void ndr_print_winspool_AsyncAddPrintProcessor(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncAddPrintProcessor *r);
void ndr_print_winspool_AsyncEnumPrintProcessors(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncEnumPrintProcessors *r);
void ndr_print_winspool_AsyncGetPrintProcessorDirectory(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncGetPrintProcessorDirectory *r);
void ndr_print_winspool_AsyncEnumPorts(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncEnumPorts *r);
void ndr_print_winspool_AsyncEnumMonitors(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncEnumMonitors *r);
void ndr_print_winspool_AsyncAddPort(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncAddPort *r);
void ndr_print_winspool_AsyncSetPort(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncSetPort *r);
void ndr_print_winspool_AsyncAddMonitor(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncAddMonitor *r);
void ndr_print_winspool_AsyncDeleteMonitor(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncDeleteMonitor *r);
void ndr_print_winspool_AsyncDeletePrintProcessor(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncDeletePrintProcessor *r);
void ndr_print_winspool_AsyncEnumPrintProcessorDatatypes(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncEnumPrintProcessorDatatypes *r);
void ndr_print_winspool_AsyncAddPerMachineConnection(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncAddPerMachineConnection *r);
void ndr_print_winspool_AsyncDeletePerMachineConnection(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncDeletePerMachineConnection *r);
void ndr_print_winspool_AsyncEnumPerMachineConnections(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncEnumPerMachineConnections *r);
enum ndr_err_code ndr_push_winspool_SyncRegisterForRemoteNotifications(struct ndr_push *ndr, int flags, const struct winspool_SyncRegisterForRemoteNotifications *r);
enum ndr_err_code ndr_pull_winspool_SyncRegisterForRemoteNotifications(struct ndr_pull *ndr, int flags, struct winspool_SyncRegisterForRemoteNotifications *r);
void ndr_print_winspool_SyncRegisterForRemoteNotifications(struct ndr_print *ndr, const char *name, int flags, const struct winspool_SyncRegisterForRemoteNotifications *r);
void ndr_print_winspool_SyncUnRegisterForRemoteNotifications(struct ndr_print *ndr, const char *name, int flags, const struct winspool_SyncUnRegisterForRemoteNotifications *r);
void ndr_print_winspool_SyncRefreshRemoteNotifications(struct ndr_print *ndr, const char *name, int flags, const struct winspool_SyncRefreshRemoteNotifications *r);
void ndr_print_winspool_AsyncGetRemoteNotifications(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncGetRemoteNotifications *r);
void ndr_print_winspool_AsyncInstallPrinterDriverFromPackage(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncInstallPrinterDriverFromPackage *r);
void ndr_print_winspool_AsyncUploadPrinterDriverPackage(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncUploadPrinterDriverPackage *r);
enum ndr_err_code ndr_push_winspool_AsyncGetCorePrinterDrivers(struct ndr_push *ndr, int flags, const struct winspool_AsyncGetCorePrinterDrivers *r);
enum ndr_err_code ndr_pull_winspool_AsyncGetCorePrinterDrivers(struct ndr_pull *ndr, int flags, struct winspool_AsyncGetCorePrinterDrivers *r);
void ndr_print_winspool_AsyncGetCorePrinterDrivers(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncGetCorePrinterDrivers *r);
void ndr_print_winspool_AsyncCorePrinterDriverInstalled(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncCorePrinterDriverInstalled *r);
void ndr_print_winspool_AsyncGetPrinterDriverPackagePath(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncGetPrinterDriverPackagePath *r);
void ndr_print_winspool_AsyncDeletePrinterDriverPackage(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncDeletePrinterDriverPackage *r);
void ndr_print_winspool_AsyncReadPrinter(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncReadPrinter *r);
void ndr_print_winspool_AsyncResetPrinter(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncResetPrinter *r);
void ndr_print_winspool_AsyncGetJobNamedPropertyValue(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncGetJobNamedPropertyValue *r);
enum ndr_err_code ndr_push_winspool_AsyncSetJobNamedProperty(struct ndr_push *ndr, int flags, const struct winspool_AsyncSetJobNamedProperty *r);
enum ndr_err_code ndr_pull_winspool_AsyncSetJobNamedProperty(struct ndr_pull *ndr, int flags, struct winspool_AsyncSetJobNamedProperty *r);
void ndr_print_winspool_AsyncSetJobNamedProperty(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncSetJobNamedProperty *r);
void ndr_print_winspool_AsyncDeleteJobNamedProperty(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncDeleteJobNamedProperty *r);
void ndr_print_winspool_AsyncEnumJobNamedProperties(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncEnumJobNamedProperties *r);
void ndr_print_winspool_AsyncLogJobInfoForBranchOffice(struct ndr_print *ndr, const char *name, int flags, const struct winspool_AsyncLogJobInfoForBranchOffice *r);
#endif /* _HEADER_NDR_iremotewinspool */