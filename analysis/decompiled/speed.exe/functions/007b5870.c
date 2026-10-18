/* speed.exe 007b5870 FUN_007b5870; analysis pseudocode, not buildable source.
 * calls 007a9e60 FUN_007a9e60
 * calls 007aef70 FUN_007aef70
 * calls 007a4b80 FUN_007a4b80
 * calls 007a4a40 FUN_007a4a40
 * calls 00652ad0 _malloc
 * calls 007aeb90 FUN_007aeb90
 * calls 007a9ea0 FUN_007a9ea0
 */

void __thiscall FUN_007b5870(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  
  puVar2 = (undefined4 *)FUN_007aeb90(param_2);
  iVar8 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    if (((*(char *)(param_2 + 0x1c) == '\0') && (cVar1 = FUN_007a4a40(param_2), cVar1 != '\0')) &&
       (iVar4 = FUN_007a4b80(*(undefined4 *)(param_2 + 0x10)), iVar4 != 0)) {
      pvVar3 = _malloc(0x2c);
      if (pvVar3 == (void *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_007a9ea0(iVar4,*(undefined4 *)(param_2 + 0x10),*(byte *)(iVar4 + 5) >> 5,7,0,
                             0x10,0,0);
      }
      uVar5 = FUN_007aef70(iVar8);
      *(undefined4 *)(iVar8 + 0x24) = uVar5;
    }
  }
  else {
    cVar1 = FUN_007a4a40(param_2);
    if ((cVar1 != '\0') && (puVar2[4] != 0)) {
      pvVar3 = _malloc(0x2c);
      if (pvVar3 == (void *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_007a9e60(puVar2[4]);
      }
    }
    iVar4 = puVar2[1];
    piVar7 = (int *)puVar2[2];
    *piVar7 = iVar4;
    *(int **)(iVar4 + 4) = piVar7;
    (**(code **)*puVar2)(1);
    *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + -1;
  }
  puVar2 = _malloc(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_008b7518;
    puVar2[3] = *(undefined4 *)(param_2 + 0xc);
    puVar2[4] = *(undefined4 *)(param_2 + 0x10);
    puVar2[5] = *(undefined4 *)(param_2 + 0x14);
    puVar2[6] = *(undefined4 *)(param_2 + 0x18);
    *(undefined1 *)(puVar2 + 7) = *(undefined1 *)(param_2 + 0x1c);
    puVar2[8] = *(undefined4 *)(param_2 + 0x20);
    puVar2[9] = *(undefined4 *)(param_2 + 0x24);
    *(undefined1 *)(puVar2 + 10) = *(undefined1 *)(param_2 + 0x28);
  }
  puVar6 = _malloc(0x18);
  if (puVar6 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *puVar6 = &PTR_FUN_008b751c;
    puVar6[3] = puVar2;
    puVar6[4] = iVar8;
    *(undefined1 *)(puVar6 + 5) = 1;
    piVar7 = puVar6 + 1;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x1b8);
  *puVar2 = piVar7;
  *(int **)(param_1 + 0x1b8) = piVar7;
  piVar7[1] = (int)puVar2;
  *piVar7 = param_1 + 0x1b4;
  *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + 1;
  return;
}

