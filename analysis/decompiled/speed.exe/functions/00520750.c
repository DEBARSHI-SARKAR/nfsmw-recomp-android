/* speed.exe 00520750 FUN_00520750; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00520750(int *param_1)

{
  char cVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x10))();
  cVar1 = *(char *)(DAT_0091ca68 + 0x14e);
  iVar2 = param_1[0xc];
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
    *(uint *)(iVar2 + 0x60) = (-(uint)(cVar1 != '\0') & 0x2f64ea54) + 0x417b25e4;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar2);
    }
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 0x400000;
  }
  iVar2 = param_1[0xb];
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar2 + 0x60) = 0x9b985275;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar2);
    }
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 0x400000;
  }
  return;
}

