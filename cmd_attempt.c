int main(void)
//im aware that none of this works, perhaps one day
{

	ProcessStartInfo procInfo = new ProcessStartInfo();

	procInfo.UseShellExecute = true;

	procInfo.FileName = @"CMD.bat";  //The file in that DIR.

	procInfo.WorkingDirectory = @""; //The working DIR.

	procInfo.Verb = "runas";

	Process.Start(procInfo);  //Start that process.

}

catch (Exception ex)

{

	MessageBox.Show(ex.Message.ToString());

}           

