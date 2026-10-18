/* speed.exe 006f5ed0 FUN_006f5ed0; analysis pseudocode, not buildable source.
 * calls 006f0360 FUN_006f0360
 * calls 006efae0 FUN_006efae0
 */

void __fastcall FUN_006f5ed0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x47d4) + *(int *)(param_1 + 0x47dc) * 8;
  uVar3 = FUN_006f0360(*(undefined4 *)(param_1 + 0x47d4),
                       *(int *)(param_1 + 0x47d4) + *(int *)(param_1 + 0x47dc) * 8,&LAB_006eafa0,
                       iVar4);
  FUN_006efae0(uVar3,iVar4);
  iVar4 = *(int *)(param_1 + 0xc);
  while (iVar4 != 0) {
    piVar1 = *(int **)(param_1 + 4);
    puVar2 = (undefined4 *)*piVar1;
    FUN_006efae0(piVar1,piVar1 + 2);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    iVar4 = *(int *)(param_1 + 0xc);
  }
  iVar4 = *(int *)(param_1 + 0x47d4) + *(int *)(param_1 + 0x47dc) * 8;
  uVar3 = FUN_006f0360(*(undefined4 *)(param_1 + 0x47d4),
                       *(int *)(param_1 + 0x47d4) + *(int *)(param_1 + 0x47dc) * 8,&LAB_006eafa0,
                       iVar4);
  FUN_006efae0(uVar3,iVar4);
  return;
}

