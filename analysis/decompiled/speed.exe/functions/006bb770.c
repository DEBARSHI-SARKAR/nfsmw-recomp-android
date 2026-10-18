/* speed.exe 006bb770 FUN_006bb770; analysis pseudocode, not buildable source.
 * calls 006972d0 FUN_006972d0
 * calls 007729d0 FUN_007729d0
 * calls 006bb4d0 FUN_006bb4d0
 * calls 00699a90 FUN_00699a90
 * calls 00789cc0 FUN_00789cc0
 */

void __thiscall FUN_006bb770(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)param_1[0x1e];
  if (*(char *)(iVar1 + 0x5d) == '\0') {
    FUN_00699a90();
    *(byte *)(iVar1 + 0x1c) = *(byte *)(iVar1 + 0x1c) & 0xfb;
    cVar2 = FUN_007729d0();
    if (cVar2 == '\0') {
      FUN_006bb4d0(param_2);
    }
    FUN_006972d0();
    cVar2 = (**(code **)(*param_1 + 0x40))();
    *(byte *)(iVar1 + 0x1d) = *(byte *)(iVar1 + 0x1d) & 0xfb;
    if (cVar2 != '\0') {
      *(undefined1 *)(iVar1 + 0x5d) = 1;
      return;
    }
  }
  else {
    uVar7 = 1;
    uVar6 = 0;
    uVar5 = 1;
    piVar4 = param_1 + 0x34;
    iVar3 = iVar1 + 0x10;
    (**(code **)(*(int *)param_1[0xd] + 0x4c))(iVar3,piVar4,1,0,1);
    FUN_00789cc0(iVar3,piVar4,uVar5,uVar6,uVar7);
    *(byte *)(iVar1 + 0x1d) = *(byte *)(iVar1 + 0x1d) & 0xfb;
  }
  return;
}

