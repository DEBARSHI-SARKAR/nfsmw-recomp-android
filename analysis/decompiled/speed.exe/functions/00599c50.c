/* speed.exe 00599c50 FUN_00599c50; analysis pseudocode, not buildable source.
 * calls 00591160 FUN_00591160
 */

undefined4 __fastcall FUN_00599c50(uint param_1)

{
  char *pcVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_8;
  
  iVar7 = 0;
  uVar6 = 0;
  local_8 = 0;
  uVar5 = param_1;
  do {
    piVar4 = (int *)((199 < iVar7) - 1 & uVar5);
    if ((((*piVar4 != -1) && ((piVar4[3] & 0xf0000U) != 0)) && ((piVar4[3] & 2U) != 0)) &&
       (((*(byte *)((int)piVar4 + 0x11) < 0x1a &&
         (pcVar1 = (char *)((uint)*(byte *)((int)piVar4 + 0x11) * 0x38 + 0x8728 + param_1),
         *pcVar1 != -1)) &&
        ((pcVar1 != (char *)0x0 &&
         (uVar2 = *(ushort *)(pcVar1 + 0x16), uVar3 = *(ushort *)(pcVar1 + 0x14),
         uVar6 < (uint)uVar2 + (uint)uVar3)))))) {
      local_8 = FUN_00591160();
      uVar6 = (uint)uVar2 + (uint)uVar3;
    }
    iVar7 = iVar7 + 1;
    uVar5 = uVar5 + 0x14;
  } while (iVar7 < 200);
  return local_8;
}

