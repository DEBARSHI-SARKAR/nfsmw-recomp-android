/* speed.exe 00414ce0 FUN_00414ce0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_00414ce0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d59f0(&LAB_00404010);
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00404040);
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00404020);
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00403f90);
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  if (*(undefined4 **)(param_1 + 0xb8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xb8))(1);
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  *(undefined4 *)(param_1 + 0xc4) = DAT_0091ddbc;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xa4) = 0xffff;
  return;
}

