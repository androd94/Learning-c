int main(void)

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

