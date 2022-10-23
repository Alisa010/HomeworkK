#include <iostream> 
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char** argv){
	 
	for(int i = 1; i < argc; ++i){
		char* arr[]{argv[i], nullptr};
		pid_t pid = fork();
		
		if(pid < 0){
 		   std::cout << "ERROR";
		}


		else if(pid == 0){
			std::cout << "child = " << getpid() << std::endl;
			execvp(argv[i], arr);

	}

		else if(pid > 0){
			int status;
			int waitpid = wait(&status);
		  
		}

	}
}

