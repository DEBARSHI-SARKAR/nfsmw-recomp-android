/* speed.exe 00588f60 FUN_00588f60; analysis pseudocode, not buildable source.
 * calls 0054e760 FUN_0054e760
 * calls 00574020 FUN_00574020
 * calls 00515960 FUN_00515960
 * calls 0054e890 FUN_0054e890
 * calls 00514d10 FUN_00514d10
 */

void __fastcall FUN_00588f60(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00515960(&local_4,&local_8);
  iVar4 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x2c);
  do {
    cVar1 = FUN_0054e760(local_4,local_8,*puVar2);
    if (cVar1 != '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x2c + *(int *)(param_1 + 0x48) * 4),0x7ab5521a,1);
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_00514d10(*(undefined4 *)(param_1 + 0x2c + iVar4 * 4),0x249db7b7,1);
      break;
    }
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar4 < 3);
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x58);
  while (cVar1 = FUN_0054e890(*puVar2), cVar1 == '\0') {
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
    if (5 < (int)uVar3) {
      return;
    }
  }
  iVar4 = (int)uVar3 / 2;
  if (*(int *)(param_1 + 0x48) != iVar4) {
    FUN_00514d10(*(undefined4 *)(param_1 + 0x2c + *(int *)(param_1 + 0x48) * 4),0x7ab5521a,1);
    *(int *)(param_1 + 0x48) = iVar4;
    FUN_00514d10(*(undefined4 *)(param_1 + 0x2c + iVar4 * 4),0x249db7b7,1);
  }
  if ((uVar3 & 1) == 0) {
    FUN_00574020(1);
    return;
  }
  FUN_00574020(0xffffffff);
  return;
}

