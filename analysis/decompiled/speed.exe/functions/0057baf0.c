/* speed.exe 0057baf0 FUN_0057baf0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __thiscall FUN_0057baf0(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  
  (**(code **)(*param_2 + 0x20))();
  piVar2 = (int *)FUN_005d59f0(&LAB_005650b0);
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 0xc))();
    if (cVar1 != '\0') {
      (**(code **)(*piVar2 + 8))(0xe1c034fc);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

