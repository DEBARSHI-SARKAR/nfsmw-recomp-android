/* speed.exe 00534ab0 FUN_00534ab0; analysis pseudocode, not buildable source.
 * calls 00598970 FUN_00598970
 * calls 00598590 FUN_00598590
 * calls 0056bc10 FUN_0056bc10
 * calls 0050e850 FUN_0050e850
 * calls 007939a0 FUN_007939a0
 * calls 00796680 FUN_00796680
 */

void __fastcall FUN_00534ab0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 local_a0 [160];
  
  FUN_0050e850(DAT_0091ca68 + 0x3c,DAT_0091ca68 + 0x7c,DAT_0091ca68 + 0xbc,
               *(undefined4 *)(DAT_0091ca68 + 0x140),*(undefined4 *)(DAT_0091ca68 + 0x144),
               *(undefined4 *)(DAT_0091ca68 + 0x148),*(char *)(DAT_0091ca68 + 0x14c) == '\0',
               *(undefined1 *)(DAT_0091ca68 + 0x14e),*(undefined1 *)(DAT_0091ca68 + 0x14d),
               DAT_0091ca68 + 0xfc);
  puVar4 = local_a0;
  pcVar5 = FUN_005207e0;
  iVar1 = param_1;
  FUN_007939a0(puVar4,FUN_005207e0,param_1);
  iVar1 = FUN_00796680(puVar4,pcVar5,iVar1);
  if (iVar1 < 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = FUN_0056bc10(0x906b132a);
    FUN_00598970(uVar3,&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,uVar2);
    return;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x130) = 1;
  uVar2 = FUN_0056bc10(0x44345f7f);
  uVar3 = FUN_00598590(uVar3,&DAT_00890978,1,uVar2);
  *(undefined4 *)(param_1 + 0x134) = uVar3;
  *(undefined1 *)(DAT_0091ca68 + 0x11) = 1;
  return;
}

