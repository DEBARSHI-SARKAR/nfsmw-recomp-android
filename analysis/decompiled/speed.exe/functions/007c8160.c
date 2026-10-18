/* speed.exe 007c8160 __CrtMemCheckpoint; analysis pseudocode, not buildable source.
 * calls 007c82e5 FUN_007c82e5
 * calls 007d0fd0 __lock
 * calls 007c82da FUN_007c82da
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __CrtMemCheckpoint
   
   Library: Visual Studio 2003 Debug */

void __CrtMemCheckpoint(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_24;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b87c8;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_14;
    __lock(4);
    local_8 = 0;
    *param_1 = DAT_009baa0c;
    for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
      param_1[local_20 + 6] = 0;
      param_1[local_20 + 1] = 0;
    }
    local_24 = DAT_009baa0c;
    do {
      if (local_24 == (undefined4 *)0x0) {
        param_1[0xb] = DAT_009baa08;
        param_1[0xc] = DAT_009ba9fc;
        local_8 = 0xffffffff;
        FUN_007c82da();
        FUN_007c82e5();
        return;
      }
      if ((local_24[5] & 0xffff) < 5) {
        param_1[(local_24[5] & 0xffff) + 1] = param_1[(local_24[5] & 0xffff) + 1] + 1;
        param_1[(local_24[5] & 0xffff) + 6] = param_1[(local_24[5] & 0xffff) + 6] + local_24[4];
      }
      else {
        iVar2 = __CrtDbgReport(0,0,0,0,"Bad memory block found at 0x%p.\n",local_24);
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_24 = (undefined4 *)*local_24;
    } while( true );
  }
  ExceptionList = &pvStack_14;
  iVar2 = __CrtDbgReport(0,0,0,0,&DAT_008941f8,"_CrtMemCheckPoint: NULL state pointer.\n");
  if (iVar2 != 1) {
    FUN_007c82e5();
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

