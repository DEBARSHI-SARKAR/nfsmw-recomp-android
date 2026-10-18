/* speed.exe 007c8820 __CrtDumpMemoryLeaks; analysis pseudocode, not buildable source.
 * calls 007c8420 __CrtMemDumpAllObjectsSince
 * calls 007d2670 __CrtDbgReport
 * calls 007c8160 __CrtMemCheckpoint
 */

/* Library Function - Single Match
    __CrtDumpMemoryLeaks
   
   Library: Visual Studio 2003 Debug */

undefined4 __CrtDumpMemoryLeaks(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_38 [8];
  int local_30;
  int local_2c;
  int local_24;
  
  __CrtMemCheckpoint(local_38);
  if (((local_24 == 0) && (local_30 == 0)) && (((DAT_00906300 & 0x10) == 0 || (local_2c == 0)))) {
    uVar3 = 0;
  }
  else {
    iVar2 = __CrtDbgReport(0,0,0,0,&DAT_008941f8,"Detected memory leaks!\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    __CrtMemDumpAllObjectsSince(0);
    uVar3 = 1;
  }
  return uVar3;
}

