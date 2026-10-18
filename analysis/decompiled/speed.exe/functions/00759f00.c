/* speed.exe 00759f00 FUN_00759f00; analysis pseudocode, not buildable source.
 * calls 00759c60 FUN_00759c60
 * calls 004655f0 FUN_004655f0
 * calls 0045cd20 __break
 * calls 00745140 FUN_00745140
 * calls 00759ba0 FUN_00759ba0
 * calls 005013e0 FUN_005013e0
 * calls 007573c0 FUN_007573c0
 */

undefined4 __thiscall FUN_00759f00(int param_1,char param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)(param_1 + 0x58);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    iVar3 = FUN_00759c60(puVar2,0);
    if (iVar3 != 0) {
      return 1;
    }
  }
  if (param_2 != '\0') {
    if (*(int *)(param_1 + 0x68) != 0) {
      iVar3 = *(int *)(param_1 + 0x68) + -1;
      *(int *)(param_1 + 0x68) = iVar3;
      FUN_004655f0(*(undefined4 *)(param_1 + 0x6c + iVar3 * 4));
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      return 1;
    }
    _param_2 = 0;
    do {
      for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
        if ((((puVar2[4] == 0) || (_param_2 == 1)) &&
            (iVar3 = puVar2[0xd4], *(char *)(iVar3 + 0xc) == '\x02')) &&
           (iVar4 = FUN_00759ba0(iVar3), iVar4 != 0)) {
          if (*(int *)(param_1 + 8) != 0) {
            FUN_005013e0();
            FUN_00745140(**(undefined4 **)(iVar3 + 8));
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          __break();
        }
      }
      _param_2 = _param_2 + 1;
      if (1 < _param_2) {
        FUN_007573c0(0);
                    /* WARNING: Subroutine does not return */
        __break();
      }
    } while( true );
  }
  return 0;
}

