/* speed.exe 00755340 FUN_00755340; analysis pseudocode, not buildable source.
 * calls 004040f0 FUN_004040f0
 * calls 00454640 FUN_00454640
 * calls 0041cb10 FUN_0041cb10
 * calls 005cc240 FUN_005cc240
 */

undefined4 FUN_00755340(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 unaff_EBX;
  int iVar4;
  undefined4 unaff_retaddr;
  undefined1 auStack_40 [64];
  
  iVar4 = 0;
  if (DAT_0092d884 != 0) {
    if ((int *)*DAT_0092d87c != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*(int *)*DAT_0092d87c + 4))();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 100))(auStack_40);
        FUN_00454640(unaff_retaddr);
        FUN_004040f0(&stack0xffffff8c);
        uVar2 = FUN_005cc240("PVehicle",&stack0xffffff8c,unaff_EBX,0xa6b47fac,&stack0xffffff8c);
        piVar3 = (int *)FUN_0041cb10(uVar2);
        if (piVar3 != (int *)0x0) {
          if (DAT_0092d884 != 0) {
            iVar4 = *DAT_0092d87c;
          }
          (**(code **)(*piVar3 + 0xc))(iVar4);
          (**(code **)(*piVar1 + 8))();
          return 1;
        }
      }
    }
  }
  return 0;
}

