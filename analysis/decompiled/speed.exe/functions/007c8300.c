/* speed.exe 007c8300 __CrtMemDifference; analysis pseudocode, not buildable source.
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __CrtMemDifference
   
   Library: Visual Studio 2003 Debug */

undefined4 __CrtMemDifference(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if (((param_1 == (undefined4 *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    iVar2 = __CrtDbgReport(0,0,0,0,&DAT_008941f8,"_CrtMemDifference: NULL state pointer.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    local_8 = 0;
  }
  else {
    for (local_c = 0; local_c < 5; local_c = local_c + 1) {
      param_1[local_c + 6] =
           *(int *)(param_3 + 0x18 + local_c * 4) - *(int *)(param_2 + 0x18 + local_c * 4);
      param_1[local_c + 1] =
           *(int *)(param_3 + 4 + local_c * 4) - *(int *)(param_2 + 4 + local_c * 4);
      if (((param_1[local_c + 6] != 0) || (param_1[local_c + 1] != 0)) &&
         ((local_c != 0 && ((local_c != 2 || ((DAT_00906300 & 0x10) != 0)))))) {
        local_8 = 1;
      }
    }
    param_1[0xb] = *(int *)(param_3 + 0x2c) - *(int *)(param_2 + 0x2c);
    param_1[0xc] = *(int *)(param_3 + 0x30) - *(int *)(param_2 + 0x30);
    *param_1 = 0;
  }
  return local_8;
}

