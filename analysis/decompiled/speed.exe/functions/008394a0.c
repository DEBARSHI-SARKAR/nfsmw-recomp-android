/* speed.exe 008394a0 FUN_008394a0; analysis pseudocode, not buildable source.
 * calls 00837bf0 FUN_00837bf0
 * calls 0083e3b0 FUN_0083e3b0
 * calls 00846110 FUN_00846110
 * calls 00847b60 FUN_00847b60
 */

int FUN_008394a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_00837bf0(param_1,0xffffffff);
  if (iVar1 < 1) {
    return -8;
  }
  do {
    iVar2 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
    if (iVar2 != 0) {
      uVar3 = FUN_00847b60(*(undefined4 *)(param_1 + 8),iVar4);
      iVar2 = FUN_0083e3b0(uVar3);
      if (((iVar2 != 0) && (*(undefined4 **)(iVar2 + 0x100) != (undefined4 *)0x0)) &&
         (iVar2 = FUN_00846110(param_2,**(undefined4 **)(iVar2 + 0x100)), iVar2 == 0)) {
        if (iVar1 <= iVar4) {
          return -8;
        }
        return iVar4;
      }
    }
    iVar4 = iVar4 + 1;
    if (iVar1 <= iVar4) {
      return -8;
    }
  } while( true );
}

