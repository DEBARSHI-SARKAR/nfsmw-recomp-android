/* speed.exe 00828f10 FUN_00828f10; analysis pseudocode, not buildable source.
 */

undefined8 __fastcall
FUN_00828f10(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 in_EAX;
  uint uVar5;
  
  do {
    if ((param_3 & 3) == 0) goto LAB_00828f3f;
    *(undefined4 *)(param_5 + -4 + param_3 * 4) =
         *(undefined4 *)(&DAT_009c2550 + (uint)*(byte *)((param_3 - 1) + param_4) * 4);
    param_3 = param_3 - 1;
  } while (param_3 != 0);
LAB_00828f80:
  return CONCAT44(param_2,in_EAX);
LAB_00828f3f:
  do {
    uVar3 = *(undefined4 *)(&DAT_009c2550 + (uint)*(byte *)((param_3 - 3) + param_4) * 4);
    bVar1 = *(byte *)((param_3 - 2) + param_4);
    bVar2 = *(byte *)((param_3 - 1) + param_4);
    *(undefined4 *)(param_5 + -0x10 + param_3 * 4) =
         *(undefined4 *)(&DAT_009c2550 + (uint)*(byte *)((param_3 - 4) + param_4) * 4);
    *(undefined4 *)(param_5 + -0xc + param_3 * 4) = uVar3;
    uVar3 = *(undefined4 *)(&DAT_009c2550 + (uint)bVar2 * 4);
    *(undefined4 *)(param_5 + -8 + param_3 * 4) = *(undefined4 *)(&DAT_009c2550 + (uint)bVar1 * 4);
    *(undefined4 *)(param_5 + -4 + param_3 * 4) = uVar3;
    uVar5 = param_3 - 4;
    bVar4 = 3 < (int)param_3;
    param_3 = uVar5;
  } while (uVar5 != 0 && bVar4);
  goto LAB_00828f80;
}

