/* speed.exe 008324dd FUN_008324dd; analysis pseudocode, not buildable source.
 * calls 00832336 FUN_00832336
 * calls 00831f67 FUN_00831f67
 * calls 00831fc1 FUN_00831fc1
 * calls 00833fc8 FUN_00833fc8
 * calls 00831d15 FUN_00831d15
 * calls 00834519 FUN_00834519
 * calls 00831c3b FUN_00831c3b
 */

int FUN_008324dd(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar1 = param_1;
  local_8 = 0;
  if ((7 < param_1) || ((&DAT_009c2aa0)[param_1] == 0)) {
    return 0;
  }
  do {
    param_1 = 0;
    local_14 = 0;
    local_10 = 0;
    if (((&DAT_009c2a20)[uVar1 * 4] == -1) ||
       ((iVar2 = FUN_00831d15(&DAT_009c2a20 + uVar1 * 4), iVar2 == 0 ||
        (param_1 = FUN_00831c3b(iVar2,&local_14), param_1 == 0)))) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = &local_14;
    }
    iVar2 = FUN_00832336(puVar4,uVar1);
    if (param_1 == 0) {
LAB_0083255f:
      if (iVar2 < 0) {
        return local_8;
      }
    }
    else if (iVar2 < 0) {
      iVar2 = FUN_00832336(0,uVar1);
      goto LAB_0083255f;
    }
    local_c = *(undefined4 *)(&DAT_009c2aec)[iVar2 * 4];
    if ((DAT_009c2bec == (code *)0x0) || (iVar3 = (*DAT_009c2bec)(&local_c), iVar3 == 1)) {
      FUN_00833fc8(uVar1);
      local_8 = FUN_00834519(iVar2);
      if (local_8 != 0) {
        FUN_00831fc1(iVar2);
        FUN_00831f67(iVar2);
        return local_8;
      }
    }
    FUN_00831f67(iVar2);
  } while( true );
}

