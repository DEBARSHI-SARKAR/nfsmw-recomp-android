/* speed.exe 007b4d70 FUN_007b4d70; analysis pseudocode, not buildable source.
 * calls 007aff10 FUN_007aff10
 */

void __fastcall FUN_007b4d70(int param_1)

{
  FUN_007aff10(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,0x3f800000,0x40a00000,0x3f800000,
               0x3f800000);
  (**(code **)(*(int *)(param_1 + 0xd8) + 0x28))
            (*(undefined4 *)(param_1 + 0x10),"ACCELERATION",0,0x3f800000,0,0,0,0x43200000);
  (**(code **)(*(int *)(param_1 + 0x11c) + 0x28))
            (*(undefined4 *)(param_1 + 0x10),"TOPSPEED",0,0x3f800000,0,0,0,0x43200000);
  (**(code **)(*(int *)(param_1 + 0x160) + 0x28))
            (*(undefined4 *)(param_1 + 0x10),"HANDLING",0,0x3f800000,0,0,0,0x43200000);
  return;
}

