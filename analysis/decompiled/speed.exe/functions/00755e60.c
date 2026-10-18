/* speed.exe 00755e60 FUN_00755e60; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 00751860 FUN_00751860
 */

void __thiscall FUN_00755e60(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0x84) = param_2;
  FUN_00751860(param_1 + 0x12a0,param_2,0);
  if (*(int *)(param_1 + 0x15c0) != *(int *)(param_1 + 0x240)) {
    *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x15c0);
    *(undefined4 *)(param_1 + 0x244) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15c4) != *(int *)(param_1 + 0x24c)) {
    *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x15c4);
    *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15cc) != *(int *)(param_1 + 0x288)) {
    *(int *)(param_1 + 0x288) = *(int *)(param_1 + 0x15cc);
    *(undefined4 *)(param_1 + 0x28c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15d0) != *(int *)(param_1 + 0x294)) {
    *(int *)(param_1 + 0x294) = *(int *)(param_1 + 0x15d0);
    *(undefined4 *)(param_1 + 0x298) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15d4) != *(int *)(param_1 + 0x2a0)) {
    *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x15d4);
    *(undefined4 *)(param_1 + 0x2a4) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15d8) != *(int *)(param_1 + 0x2ac)) {
    *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x15d8);
    *(undefined4 *)(param_1 + 0x2b0) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15c8) != *(int *)(param_1 + 600)) {
    *(int *)(param_1 + 600) = *(int *)(param_1 + 0x15c8);
    *(undefined4 *)(param_1 + 0x25c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15c8) != *(int *)(param_1 + 0x264)) {
    *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x15c8);
    *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15c8) != *(int *)(param_1 + 0x270)) {
    *(int *)(param_1 + 0x270) = *(int *)(param_1 + 0x15c8);
    *(undefined4 *)(param_1 + 0x274) = 0xffffffff;
  }
  puVar2 = (undefined4 *)(param_1 + 0x23c);
  puVar3 = (undefined4 *)(param_1 + 0x5a8);
  for (iVar1 = 0xdb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = FUN_00460bf0("CARBONFIBRE");
  if (iVar1 != *(int *)(param_1 + 0x5ac)) {
    *(int *)(param_1 + 0x5ac) = iVar1;
    *(undefined4 *)(param_1 + 0x5b0) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15c8) != *(int *)(param_1 + 0x5b8)) {
    *(int *)(param_1 + 0x5b8) = *(int *)(param_1 + 0x15c8);
    *(undefined4 *)(param_1 + 0x5bc) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15c8) != *(int *)(param_1 + 0x5c4)) {
    *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x15c8);
    *(undefined4 *)(param_1 + 0x5c8) = 0xffffffff;
  }
  iVar1 = FUN_00460bf0("CARBONFIBRE");
  if (iVar1 != *(int *)(param_1 + 0x5d0)) {
    *(int *)(param_1 + 0x5d0) = iVar1;
    *(undefined4 *)(param_1 + 0x5d4) = 0xffffffff;
  }
  iVar1 = FUN_00460bf0("CARBONFIBRE");
  if (iVar1 != *(int *)(param_1 + 0x5dc)) {
    *(int *)(param_1 + 0x5dc) = iVar1;
    *(undefined4 *)(param_1 + 0x5e0) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15c8) != *(int *)(param_1 + 0xb64)) {
    *(int *)(param_1 + 0xb64) = *(int *)(param_1 + 0x15c8);
    *(undefined4 *)(param_1 + 0xb68) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15c8) != *(int *)(param_1 + 0xb7c)) {
    *(int *)(param_1 + 0xb7c) = *(int *)(param_1 + 0x15c8);
    *(undefined4 *)(param_1 + 0xb80) = 0xffffffff;
  }
  return;
}

