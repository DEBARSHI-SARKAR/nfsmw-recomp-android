/* speed.exe 004ca430 FUN_004ca430; analysis pseudocode, not buildable source.
 * calls 004c91d0 FUN_004c91d0
 */

void __thiscall FUN_004ca430(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int local_8;
  undefined4 local_4;
  
  do {
    puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 4);
    while( true ) {
      if (puVar1 == *(undefined4 **)(param_1 + 4)) {
        return;
      }
      local_28[0] = puVar1[2];
      local_4 = puVar1[0xb];
      local_20 = puVar1[4];
      local_1c = puVar1[5];
      local_18 = puVar1[6];
      local_14 = puVar1[7];
      local_10 = puVar1[8];
      local_c = *(undefined1 *)(puVar1 + 9);
      local_8 = puVar1[10];
      if (local_8 == param_2) break;
      puVar1 = (undefined4 *)*puVar1;
    }
    FUN_004c91d0(local_28);
  } while( true );
}

